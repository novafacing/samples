#ifndef STDINT_H
#define STDINT_H

#define uint32_t unsigned int
#define uint16_t unsigned short
#define uint8_t unsigned char
#define bool uint8_t
#define int32_t int
#define int16_t short
#define int8_t char

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
