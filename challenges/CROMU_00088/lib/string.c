/*

Copyright (c) 2016 Cromulence LLC

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
#include <stdint.h>
#include <string.h>

size_t strlen(const char *str) {
  size_t len = 0;
  while (*str++ != '\0') len++;

  return len;
}

int strcmp(const char *s1, const char *s2) {
  if (s1 == 0 || s2 == 0) return -1;

  while (*s1 && (*s1 == *s2)) {
    s1++, s2++;
  }
  return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}

int strncmp(const char *s1, const char *s2, size_t len) {
  size_t count = 0;

  if (s1 == 0 || s2 == 0) return -1;

  while (*s1 && (*s1 == *s2) && count < len) {
    s1++, s2++;
    ++count;
  }
  return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}

void bzero(void *s, size_t n) {
  while (n) {
    ((char *)s)[--n] = '\0';
  }
  ((char *)s)[n] = '\0';
}

void *memset(void *ptr, int value, size_t num) {
  void *ptr_temp = ptr;
  uint8_t set_value_byte = (uint8_t)value;
  uint32_t set_value_dword = (set_value_byte << 24) | (set_value_byte << 16) |
                             (set_value_byte << 8) | set_value_byte;

  while (num >= 4) {
    *((uint32_t *)ptr++) = set_value_dword;
    num -= 4;
  }

  while (num > 0) {
    *((uint8_t *)ptr++) = set_value_byte;
    num--;
  }

  return (ptr_temp);
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
