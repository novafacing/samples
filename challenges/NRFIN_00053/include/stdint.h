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

#ifndef STDINT_H
#define STDINT_H 1

/** The max value of an int */
#define INT_MAX (2147483647)
/** The min value of an int */
#define INT_MIN (-2147483647 - 1)
/** The max value of an unsigned int */
#define UINT_MAX (4294967295)
/** The min value of an unsigned int */
#define UINT_MIN (0)

#define FALSE 0
#define TRUE 1

#define SUCCESS 0
/* Types for `void *' pointers.  */
#if defined(_WIN64) || defined(__LP64__) || defined(_LP64)
#ifndef __intptr_t_defined
typedef long int intptr_t;
#define __intptr_t_defined
#endif
typedef unsigned long int uintptr_t;
#else
#ifndef __intptr_t_defined
typedef int intptr_t;
#define __intptr_t_defined
#endif
typedef unsigned int uintptr_t;
#endif

#endif