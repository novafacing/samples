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
#include "send_bytes.h"

#include <errno.h>
#include <libcgc.h>

#include "libc.h"

int send_bytes(int fd, const char *buf, unsigned int size) {
  int ret = SUCCESS;
  size_t bytes_left = size;
  size_t tx_bytes_local = 0;

  while (bytes_left) {
    tx_bytes_local = 0;

    if (SUCCESS != (ret = transmit(STDOUT, buf + (size - bytes_left),
                                   bytes_left, &tx_bytes_local))) {
      err("transmit() call within send_bytes() failed\n");
    }

    bytes_left -= tx_bytes_local;

    // Assume EOF if 0-lengthed buffer.
    if (0 == tx_bytes_local) {
      goto bail;
    }
  }

bail:
  return ret;
}
