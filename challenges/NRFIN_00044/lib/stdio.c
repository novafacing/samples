/*
 * Copyright (C) Narf Industries <info@narfindustries.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "stdio.h"

#include <libcgc.h>

#include "conv.h"
#include "limits.h"
#include "pool.h"
#include "stdlib.h"
#include "string.h"

struct FILE {
  int fd;
  enum mode mode;
  unsigned char *buf;
  size_t bufsize;
  size_t bufpos;
};

static FILE stdfiles[3] = {{STDIN, READ, NULL, 0, 0},
                           {STDOUT, WRITE, NULL, 0, 0},
                           {STDERR, WRITE, NULL, 0, 0}};

static struct pool file_pool = {0, NULL};

FILE *stdin = &stdfiles[0];
FILE *stdout = &stdfiles[1];
FILE *stderr = &stdfiles[2];

ssize_t read_all(int fd, void *ptr, size_t size) {
  ssize_t ret = 0;
  size_t bytes_rx;

  if (size > SSIZE_MAX) return EXIT_FAILURE;

  while (size) {
    if (receive(fd, (unsigned char *)ptr + ret, size, &bytes_rx) != 0 ||
        bytes_rx == 0)
      return EXIT_FAILURE;

    size -= bytes_rx;
    ret += bytes_rx;
  }

  return ret;
}

ssize_t read_until(int fd, void *ptr, unsigned char delim, size_t size) {
  ssize_t ret = 0;
  size_t bytes_rx;

  if (size < 1 || size > SSIZE_MAX) return EXIT_FAILURE;

  while (ret < (ssize_t)size - 1) {
    if (receive(fd, (unsigned char *)ptr + ret, 1, &bytes_rx) != 0 ||
        bytes_rx == 0)
      return EXIT_FAILURE;

    if (*((unsigned char *)ptr + ret) == delim) break;

    ret += bytes_rx;
  }

  *((unsigned char *)ptr + ret) = '\0';
  return ret;
}

ssize_t write_all(int fd, const void *ptr, size_t size) {
  ssize_t ret = 0;
  size_t bytes_tx;

  if (size > SSIZE_MAX) return EXIT_FAILURE;

  while (size) {
    if (transmit(fd, (const unsigned char *)ptr + ret, size, &bytes_tx) != 0 ||
        bytes_tx == 0)
      return EXIT_FAILURE;

    size -= bytes_tx;
    ret += bytes_tx;
  }

  return ret;
}

static int allocate_buffer(FILE *stream) {
  if (stream->buf) return EXIT_FAILURE;

  if (allocate(PAGE_SIZE, 0, (void **)&stream->buf) != 0) return EXIT_FAILURE;

  stream->bufsize = 0;
  stream->bufpos = 0;

  return EXIT_SUCCESS;
}

FILE *fdopen(int fd, enum mode mode) {
  FILE *ret;

  if (file_pool.size == 0 &&
      pool_init(&file_pool, sizeof(struct FILE)) != EXIT_SUCCESS)
    return NULL;

  if ((ret = pool_alloc(&file_pool)) == NULL) return NULL;

  ret->fd = fd;
  ret->mode = mode;
  ret->buf = NULL;
  ret->bufsize = 0;
  ret->bufpos = 0;

  return ret;
}

void fclose(FILE *stream) {
  if (stream->buf) deallocate(stream->buf, PAGE_SIZE);

  pool_free(&file_pool, stream);
}

int fflush(FILE *stream) {
  ssize_t written;

  if (!stream || !stream->mode == WRITE) return EXIT_FAILURE;

  if (!stream->buf || stream->bufsize == 0) return EXIT_SUCCESS;

  written =
      write_all(stream->fd, &stream->buf[stream->bufpos], stream->bufsize);
  if (written < 0) return written;

  stream->bufsize = 0;
  stream->bufpos = 0;

  return EXIT_SUCCESS;
}

ssize_t fread(void *ptr, size_t size, FILE *stream) {
  ssize_t ret = 0;
  size_t bytes_rx, buffered, whole_chunks;
  unsigned char *ptr_ = ptr;

  if (size > SSIZE_MAX || stream->mode != READ) return EXIT_FAILURE;

  if (size == 0) return ret;

  // Copy remaining bytes
  if (stream->bufsize > 0) {
    buffered = MIN(size, stream->bufsize);

    memcpy(ptr_, &stream->buf[stream->bufpos], buffered);
    stream->bufsize -= buffered;
    stream->bufpos = stream->bufsize ? stream->bufpos + buffered : 0;
    size -= buffered;
    ptr_ += buffered;
    ret += buffered;

    if (size == 0) return ret;

    stream->bufsize = 0;
    stream->bufpos = 0;
  }

  // Read whole chunks
  if (size >= PAGE_SIZE) {
    whole_chunks = size & ~(PAGE_SIZE - 1);

    if ((bytes_rx = read_all(stream->fd, ptr_, whole_chunks)) != whole_chunks)
      return EXIT_FAILURE;

    size &= PAGE_SIZE - 1;
    ptr_ += whole_chunks;
    ret += whole_chunks;

    if (size == 0) return ret;
  }

  // Read the remainder, attempting to overread to fill buffer but breaking
  // once all of our data has been read
  if (!stream->buf && allocate_buffer(stream) != EXIT_SUCCESS)
    return EXIT_FAILURE;

  while (stream->bufsize < size) {
    if (receive(stream->fd, &stream->buf[stream->bufpos + stream->bufsize],
                PAGE_SIZE - stream->bufsize, &bytes_rx) != 0 ||
        bytes_rx == 0)
      return EXIT_FAILURE;

    stream->bufsize += bytes_rx;
  }

  if (stream->bufsize >= size) {
    buffered = MIN(size, stream->bufsize);

    memcpy(ptr_, &stream->buf[stream->bufpos], buffered);
    stream->bufsize -= buffered;
    stream->bufpos = stream->bufsize ? stream->bufpos + buffered : 0;
    ret += buffered;
  }

  return ret;
}

ssize_t fread_until(void *ptr, unsigned char delim, size_t size, FILE *stream) {
  ssize_t ret = 0;
  size_t buffered, bytes_rx;
  char *delim_ptr;
  unsigned char *ptr_ = ptr;

  if (size < 1 || size > SSIZE_MAX || stream->mode != READ) return EXIT_FAILURE;

  // Read the remainder, attempting to overread to fill buffer but breaking
  // once all of our data has been read
  if (!stream->buf && allocate_buffer(stream) != EXIT_SUCCESS)
    return EXIT_FAILURE;

  while (ret < size - 1) {
    if (stream->buf && stream->bufsize > 0) {
      if ((delim_ptr =
               memchr(&stream->buf[stream->bufpos], delim, stream->bufsize)))
        buffered =
            (unsigned char *)delim_ptr - &stream->buf[stream->bufpos] + 1;
      else
        buffered = stream->bufsize;

      buffered = MIN(size - 1, buffered);

      memcpy(ptr_, &stream->buf[stream->bufpos], buffered);
      stream->bufsize -= buffered;
      stream->bufpos = stream->bufsize ? stream->bufpos + buffered : 0;
      size -= buffered;
      ptr_ += buffered;
      ret += buffered;

      if (size == 1 || delim_ptr) {
        *ptr_++ = '\0';
        return ret;
      }
    }

    if (receive(stream->fd, &stream->buf[stream->bufpos + stream->bufsize],
                PAGE_SIZE - stream->bufsize, &bytes_rx) != 0 ||
        bytes_rx == 0)
      return EXIT_FAILURE;

    stream->bufsize += bytes_rx;
  }

  return EXIT_FAILURE;
}

ssize_t fwrite(const void *ptr, size_t size, FILE *stream) {
  ssize_t ret = 0;
  size_t bytes_tx, buffered, whole_chunks;
  const unsigned char *ptr_ = ptr;

  if (size > SSIZE_MAX || stream->mode != WRITE) return EXIT_FAILURE;

  if (size == 0) return ret;

  // Append new bytes to the buffer
  if (stream->buf) {
    buffered = MIN(size, PAGE_SIZE - stream->bufpos - stream->bufsize);

    memcpy(&stream->buf[stream->bufpos + stream->bufsize], ptr_, buffered);
    stream->bufsize += buffered;
    size -= buffered;
    ptr_ += buffered;
    ret += buffered;

    if (size == 0) return ret;

    if (stream->bufsize !=
        write_all(stream->fd, &stream->buf[stream->bufpos], stream->bufsize))
      return EXIT_FAILURE;

    stream->bufsize = 0;
    stream->bufpos = 0;
  }

  // Write whole chunks
  if (size >= PAGE_SIZE) {
    whole_chunks = size & ~(PAGE_SIZE - 1);

    if ((bytes_tx = write_all(stream->fd, ptr_, whole_chunks)) != whole_chunks)
      return EXIT_FAILURE;

    size &= PAGE_SIZE - 1;
    ptr_ += whole_chunks;
    ret += whole_chunks;

    if (size == 0) return ret;
  }

  // Buffer the remainder
  if (!stream->buf && allocate_buffer(stream) != EXIT_SUCCESS)
    return EXIT_FAILURE;

  memcpy(stream->buf, ptr_, size);
  stream->bufsize = size;
  ret += size;

  return ret;
}

int fgetc(FILE *stream) {
  char c;
  ssize_t read;

  if (stream->bufsize)
    read = fread(&c, 1, stream);
  else
    read = read_all(stream->fd, &c, 1);

  return read < 0 ? read : c;
}

int fputc(int character, FILE *stream) { return fwrite(&character, 1, stream); }

static int printf_core(const char *format, void (*printfn)(char c, void *data),
                       void *data, va_list args) {
  int ret = 0;
  char c, f, buf[32];
  size_t buflen;
  const char *s = NULL;

  while ((f = *format++)) {
    if (f != '%') {
      printfn(f, data);
      ret++;
    } else {
      switch ((f = *format++)) {
        case '%':
          printfn(f, data);
          ret++;
          break;
        case 'c':
          c = va_arg(args, int);
          printfn(c, data);
          ret++;
          break;
        case 's':
          s = va_arg(args, char *);
          break;
        case 'f':
          if (dtostr(va_arg(args, double), buf, sizeof(buf)) != EXIT_SUCCESS)
            return EXIT_FAILURE;
          s = buf;
          break;
        case 'd':
          if (itostr(va_arg(args, int), 10, 0, buf, sizeof(buf)) !=
              EXIT_SUCCESS)
            return EXIT_FAILURE;
          s = buf;
          break;
        case 'u':
          if (utostr(va_arg(args, unsigned int), 10, 0, buf, sizeof(buf)) !=
              EXIT_SUCCESS)
            return EXIT_FAILURE;
          s = buf;
          break;
        case 'x':
        case 'X':
          if (utostr(va_arg(args, unsigned int), 16, isupper(f), buf,
                     sizeof(buf)) != EXIT_SUCCESS)
            return EXIT_FAILURE;

          // Pad out with 8 zeros
          if ((buflen = strlen(buf)) < 2 * sizeof(unsigned int)) {
            memmove(buf + (2 * sizeof(unsigned int) - buflen), buf, buflen + 1);
            memset(buf, '0', 2 * sizeof(unsigned int) - buflen);
          }

          s = buf;
          break;
        default:
          return EXIT_FAILURE;
      }

      while (s && *s) {
        printfn(*s++, data);
        ret++;
      }

      s = NULL;
    }
  }

  return ret;
}

static void file_printer(char c, void *data) {
  fputc(c, data);

  if (c == '\n') fflush(data);
}

struct string_printer_ctx {
  char *s;
  size_t num;
};

static void string_printer(char c, void *data) {
  struct string_printer_ctx *ctx = data;
  if (ctx->num--) *ctx->s++ = c;
}

int vfprintf(FILE *stream, const char *format, va_list args) {
  return printf_core(format, file_printer, stream, args);
}

int vprintf(const char *format, va_list args) {
  return vfprintf(stdout, format, args);
}

int vsnprintf(char *s, size_t num, const char *format, va_list args) {
  struct string_printer_ctx ctx = {s, num};
  return printf_core(format, string_printer, &ctx, args);
}

int vsprintf(char *s, const char *format, va_list args) {
  return vsnprintf(s, (size_t)SIZE_MAX, format, args);
}

int fprintf(FILE *stream, const char *format, ...) {
  int ret;
  va_list args;
  va_start(args, format);
  ret = vfprintf(stream, format, args);
  va_end(args);
  return ret;
}

int printf(const char *format, ...) {
  int ret;
  va_list args;
  va_start(args, format);
  ret = vprintf(format, args);
  va_end(args);
  return ret;
}

int snprintf(char *s, size_t num, const char *format, ...) {
  int ret;
  va_list args;
  va_start(args, format);
  ret = vsnprintf(s, num, format, args);
  va_end(args);
  return ret;
}

int sprintf(char *s, const char *format, ...) {
  int ret;
  va_list args;
  va_start(args, format);
  ret = vsprintf(s, format, args);
  va_end(args);
  return ret;
}
