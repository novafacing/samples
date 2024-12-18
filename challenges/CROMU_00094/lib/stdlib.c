/*

Copyright (c) 2015 Cromulence LLC

Authors: Cromulence <cgc@cromulence.com>

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
#include <ctype.h>
#include <stdint.h>
#include <stdlib.h>

#include "stdio.h"

#define LONG_MIN (0x80000000L)
#define LONG_MAX (0x7FFFFFFFL)

uint32_t x, y, z, w;

void srand(void) {
  x = *(uint32_t *)0x4347c000;
  y = *(uint32_t *)0x4347c004;
  z = *(uint32_t *)0x4347c008;
  w = *(uint32_t *)0x4347c00C;
}

uint32_t rand(void) {
  uint32_t r = x;
  r = r ^ (r << 11);
  r = r ^ (r >> 8);
  x = y;
  y = z;
  z = w;
  w = w ^ (w >> 19);
  w = w ^ (r);
  return w;
}

uint32_t random_in_range(uint32_t min, uint32_t max) {
  if (min > max) return 0;
  if (min == max) return min;

  uint32_t value;
  uint32_t delta = max - min;

  uint32_t scale_divider = (0xffffffff) / delta;
  value = rand();
  return min + (value / scale_divider);
}

int atoi(const char *pStr) {
  int value = 0;
  int negative = 0;

  while (isspace(*pStr)) pStr++;

  if (*pStr == '\0') return 0;

  if (*pStr == '-') {
    negative = 1;
    pStr++;
  }

  // Read in string
  while (isdigit(*pStr)) value = (value * 10) + (*pStr++ - '0');

  if (negative)
    return (-value);
  else
    return value;
}

double atof(char *pStr) {
  double whole;
  double fraction = 0.0;
  char *pWhole = pStr;
  char *pFraction;

  // find the decimal point
  pFraction = pStr;
  while (*pFraction != '\0') {
    if (*pFraction == '.') {
      *pFraction = '\0';
      pFraction++;
      break;
    }
    pFraction++;
  }

  // convert the whole part
  whole = atoi(pWhole);

  // convert the fractional part
  if (*pFraction != '\0') {
    fraction = atoi(pFraction);
    while (pFraction != '\0' && isdigit(*pFraction)) {
      fraction /= 10.0;
      pFraction++;
    }
  }

  return (whole + fraction);
}

char *strcpy(char *pDest, const char *pSrc) {
  char *pDestReturn = pDest;

  while (*pSrc != '\0') *pDest++ = *pSrc++;

  *pDest = '\0';

  return (pDestReturn);
}

char *strncpy(char *pDest, const char *pSrc, size_t maxlen) {
  size_t n;

  for (n = 0; n < maxlen; n++) {
    if (pSrc[n] == '\0') break;

    pDest[n] = pSrc[n];
  }

  for (; n < maxlen; n++) pDest[n] = '\0';

  return (pDest);
}

void *memcpy(void *pDest, const void *pSource, size_t nbytes) {
  void *pDestReturn = pDest;

  while (nbytes >= 4) {
    *((uint32_t *)pDest) = *((uint32_t *)pSource);

    pDest += 4;
    pSource += 4;
    nbytes -= 4;
  }

  while (nbytes > 0) {
    *((uint8_t *)pDest) = *((uint8_t *)pSource);

    pDest++;
    pSource++;
    nbytes--;
  }

  return (pDestReturn);
}

long int strtol(const char *str, char **endptr, int base) {
  long int value = 0;
  int neg = 0;

  if (str == NULL) return (0);

  if (base >= 16) base = 16;

  // Skip whitespace
  while (isspace(*str)) str++;

  if (*str == '-') {
    neg = 1;
    str++;
  } else if (*str == '+')
    str++;

  if ((base == 16 || base == 0) && *str == '0' &&
      (*(str + 1) == 'x' || *(str + 1) == 'X')) {
    str += 2;
    base = 16;
  } else if ((base == 0 || base == 2) && *str == '0' &&
             (*(str + 1) == 'b' || *(str + 1) == 'B')) {
    str += 2;
    base = 2;
  }

  if (base == 0) {
    if (*str == '0') {
      base = 8;
    } else
      base = 10;
  }

  unsigned long cutoff_value = 0;
  if (neg)
    cutoff_value = -(unsigned long)LONG_MIN;
  else
    cutoff_value = (unsigned long)LONG_MAX;
  long int cutlim_value = cutoff_value % (unsigned long)base;

  cutoff_value /= base;

  while (*str != '\0') {
    int c = *str;

    if (isdigit(c))
      c -= '0';
    else if (isalpha(c)) {
      if (isupper(c))
        c -= ('A' - 10);
      else
        c -= ('a' - 10);
    } else
      break;

    if (c >= base) break;

    if (value > cutoff_value || (value == cutoff_value && c > cutlim_value))
      break;
    else {
      value *= base;
      value += c;
    }

    str++;
  }

  // Check if we should set endptr
  if (endptr) *endptr = (char *)str;

  if (neg)
    return -value;
  else
    return value;
}
