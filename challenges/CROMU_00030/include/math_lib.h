/*

Author: James Nuttall (james@cromulence.co)

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
#ifndef MTH_H_DEFINED
#define MTH_H_DEFINED

#include <libcgc.h>

#include "prng.h"
#include "stdlib.h"

// #define DEBUG_PRINT_ON
#ifdef DEBUG_PRINT_ON
#define debug_print(fmt, ...) printf(fmt, __VA_ARGS__);
#else
#define debug_print(...) \
  do {                   \
  } while (0);
#endif

#define FAIL 0
#define SUCCESS 1

#define TRUE 1
#define FALSE 0

#define UNINITIALIZED -1

#define INPUT 1

#define PI \
  3  // doesn't matter if it's correct. also, float math between python and c is
     // dumb

#define MAX_INT 2147483647

#define TEST_LEN 12

int seed_prng();

#endif
