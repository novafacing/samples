/*

Author: Jason Williams <jdw@cromulence.com>

Copyright (c) 2014 Cromulence LLC

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

*/
#include <libcgc.h>
#include <stdint.h>
#include <stdlib.h>

void bzero(void *buff, size_t len) {
  size_t index = 0;
  unsigned char *c = buff;

  if (buff == NULL) {
    goto end;
  }

  if (len == 0) {
    goto end;
  }

  for (index = 0; index < len; index++) {
    c[index] = 0x00;
  }

end:
  return;
}

char *strchr(const char *s, int c) {
  while (*s != '\0') {
    if (*s == c) {
      return ((char *)s);
    }
    s++;
  }
  if (*s == c) {
    return ((char *)s);
  }
  return (NULL);
}

char *strdup(char *s) {
  char *retval;

  if (!s) {
    return (NULL);
  }

  if (allocate(strlen(s) + 1, 0, (void *)&retval)) {
    return (NULL);
  }

  bzero(retval, strlen(s) + 1);
  strcpy(retval, s);

  return (retval);
}

char *token = NULL;
char *prev_str = NULL;
unsigned int prev_str_len = 0;
char *prev_str_ptr = NULL;
char *strtok(char *str, const char *delim) {
  char *start;
  char *end;
  char *t;
  int i;

  // invalid input
  if (delim == NULL) {
    return (NULL);
  }

  // called on existing string
  if (str == NULL) {
    if (prev_str == NULL) {
      return (NULL);
    }
    // already parsed through end of original str
    if (prev_str_ptr >= prev_str + prev_str_len) {
      return (NULL);
    }
  } else {
    // called with new string, so free the old one
    if (prev_str) {
      deallocate(prev_str, prev_str_len);
      prev_str = NULL;
      prev_str_len = 0;
      prev_str_ptr = NULL;
    }
  }

  // not been called before, so make a copy of the string
  if (prev_str == NULL) {
    if (strlen(str) > 4096) {
      // too big
      return (NULL);
    }
    prev_str_len = strlen(str);
    if (allocate(prev_str_len, 0, (void *)&prev_str)) {
      return (NULL);
    }
    strcpy(prev_str, str);
    prev_str_ptr = prev_str;
  }

  str = prev_str_ptr;

  // make sure the string isn't starting with a delimeter
  while (strchr(delim, str[0]) && str < prev_str + prev_str_len) {
    str++;
  }
  if (str >= prev_str + prev_str_len) {
    return (NULL);
  }

  // find the earliest next delimiter
  start = str;
  end = str + strlen(str);
  for (i = 0; i < strlen((char *)delim); i++) {
    if ((t = strchr(start, delim[i]))) {
      if (t != NULL && t < end) {
        end = t;
      }
    }
  }

  // populate the new token
  token = start;
  *end = '\0';

  prev_str_ptr = end + 1;

  return (token);
}

void puts(char *t) {
  size_t size;
  transmit(STDOUT, t, strlen(t), &size);
  transmit(STDOUT, "\n", 1, &size);
}

int isspace(int c) {
  if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
    return 1;
  else
    return 0;
}

int isdigit(int c) {
  if (c >= '0' && c <= '9')
    return 1;
  else
    return 0;
}

int isnan(double val) { return __builtin_isnan(val); }

int isinf(double val) { return __builtin_isinf(val); }

int tolower(int c) {
  if (c >= 'A' && c <= 'Z')
    return (c - 'A') + 'a';
  else
    return c;
}

int toupper(int c) {
  if (c >= 'a' && c <= 'z')
    return (c - 'a') + 'A';
  else
    return c;
}

int strcmp(char *str1, char *str2) {
  size_t i;

  for (i = 0;; i++) {
    if (str1[i] == '\0' && str2[i] == '\0') break;

    if (str1[i] == '\0') return -1;

    if (str2[i] == '\0') return 1;

    if (str1[i] < str2[i]) return -1;

    if (str1[i] > str2[i]) return 1;
  }

  return 0;
}

char *strcpy(char *dest, char *src) {
  size_t i;

  for (i = 0;; i++) {
    if (src[i] == '\0') break;

    dest[i] = src[i];
  }
  dest[i] = '\0';

  return (dest);
}

char *strncpy(char *dest, const char *src, size_t num) {
  size_t i;

  for (i = 0; i < num; i++) {
    if (src[i] == '\0') break;

    dest[i] = src[i];
  }
  dest[i] = '\0';

  return (dest);
}

int flush_input(int fd) {
  fd_set read_fds;
  int err;
  int ready_fd;
  struct timeval tv;
  char buffer[1024];
  size_t rcv_cnt;

  while (1) {
    memset((void *)&read_fds, 0, sizeof(read_fds));
    FD_SET(fd, &read_fds);

    tv.tv_sec = 0;
    tv.tv_usec = 10;

    err = fdwait(fd + 1, &read_fds, NULL, &tv, &ready_fd);
    if (err != 0) return err;

    if (!FD_ISSET(fd, &read_fds))
      break;
    else
      receive(fd, buffer, 1024, &rcv_cnt);
  }

  return (0);
}

size_t getline(char *buffer, size_t len) {
  int count;

  count = receive_until(buffer, '\n', len);

  if (count == len)
    buffer[len - 1] = '\0';
  else
    buffer[count] = '\0';

  return (count);
}

size_t receive_until(char *dst, char delim, size_t max) {
  size_t len = 0;
  size_t rx = 0;
  char c = 0;

  while (len < max) {
    dst[len] = 0x00;

    if (receive(STDIN, &c, 1, &rx) != 0) {
      len = 0;
      goto end;
    }

    if (c == delim) goto end;

    dst[len] = c;
    len++;
  }
end:
  if (len == max) flush_input(STDIN);

  return (len);
}

void *memcpy(void *dest, void *src, size_t numbytes) {
  size_t bytes_copied = 0;
  if (numbytes >= 4) {
    for (; bytes_copied + 3 < numbytes; bytes_copied += 4)
      *((uint32_t *)(dest + bytes_copied)) =
          *((uint32_t *)(src + bytes_copied));
  }

  for (; bytes_copied < numbytes; bytes_copied++)
    *((uint8_t *)(dest + bytes_copied)) = *((uint8_t *)(src + bytes_copied));

  return dest;
}

void *memset(void *dest, int value, size_t numbytes) {
  size_t bytes_copied = 0;
  uint8_t byte_set_value = (uint8_t)value;

  if (numbytes >= 4) {
    uint32_t dword_set_value = (byte_set_value << 24) | (byte_set_value << 16) |
                               (byte_set_value << 8) | byte_set_value;

    for (; bytes_copied + 3 < numbytes; bytes_copied += 4)
      *((uint32_t *)(dest + bytes_copied)) = dword_set_value;
  }

  for (; bytes_copied < numbytes; bytes_copied++)
    *((uint8_t *)(dest + bytes_copied)) = byte_set_value;

  return dest;
}

int atoi(const char *str) {
  if (str == NULL) return 0;

  int integer_part = 0;
  int sign = 1;
  int part;
  int digit_count = 0;

  // Skip whitespace
  while (isspace(str[0])) str++;

  part = 0;  // First part (+/-/number is acceptable)

  while (str[0] != '\0') {
    if (str[0] == '-') {
      if (part != 0) return 0;

      sign = -1;
      part++;
    } else if (str[0] == '+') {
      if (part != 0) return 0;

      part++;
    } else if (isdigit(*str)) {
      if (part == 0 || part == 1) {
        // In integer part
        part = 1;
        integer_part = (integer_part * 10) + (*str - '0');

        digit_count++;

        if (digit_count == 12) break;
      } else {
        // part invalid
        return 0;
      }
    } else
      break;

    str++;
  }

  return (sign * integer_part);
}

size_t strlen(const char *str) {
  size_t length = 0;

  while (str[length] != '\0') length++;

  return length;
}

int abs(int val) {
  if (val < 0)
    return -val;
  else
    return val;
}
