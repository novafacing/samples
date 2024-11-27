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

#include "stdlib.h"

#include <libcgc.h>

static unsigned long long rand_seed = 0xdeadbeefull;

void srand(unsigned int seed) { rand_seed = seed; }

unsigned int rand(void) {
  // Constants from Knuth
  rand_seed = 6364136223846793005 * rand_seed + 1442695040888963407;
  return (unsigned int)(rand_seed >> 32);
}

unsigned char get_flag_byte(size_t index) {
  unsigned char *flag_page = (unsigned char *)FLAG_PAGE;
  return flag_page[(index % (PAGE_SIZE / 4)) * 4];
}

unsigned char get_flag_byte_unsafe(size_t index) {
  unsigned char *flag_page = (unsigned char *)FLAG_PAGE;
  return flag_page[index % PAGE_SIZE];
}

unsigned long long strtoull(const char *str, char **endptr, int base) {
  unsigned long long result = 0;
  int negative = 0;

  // Skip whitespace
  while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r') {
    str++;
  }

  // Handle optional sign
  if (*str == '-' || *str == '+') {
    negative = (*str == '-');
    str++;
  }

  // Handle base prefix
  if (base == 0 || base == 16) {
    if (str[0] == '0' && (str[1] == 'x' || str[1] == 'X')) {
      str += 2;
      base = 16;
    }
  }
  if (base == 0) {
    base = str[0] == '0' ? 8 : 10;
  }

  // Process digits
  while (*str) {
    int digit;

    if (*str >= '0' && *str <= '9') {
      digit = *str - '0';
    } else if (*str >= 'a' && *str <= 'f') {
      digit = *str - 'a' + 10;
    } else if (*str >= 'A' && *str <= 'F') {
      digit = *str - 'A' + 10;
    } else {
      break;
    }

    if (digit >= base) {
      break;
    }

    // Check for overflow
    if (result > (SIZE_MAX - digit) / base) {
      result = SIZE_MAX;
      break;
    }

    result = result * base + digit;
    str++;
  }

  if (endptr) {
    *endptr = (char *)str;
  }

  return negative ? -result : result;
}