#ifndef STDINT_H_
#define STDINT_H_

typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long long int int64_t;
typedef long long int intmax_t;

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
typedef unsigned long long int uintmax_t;

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

/* Minimum of signed integral types.  */
#define INT8_MIN (-128)
#define INT16_MIN (-32767 - 1)
#define INT32_MIN (-2147483647 - 1)
#define INT64_MIN (-(9223372036854775807LL) - 1)
#define INT_MIN INT32_MIN
#define LONG_MIN INT32_MIN

/* Maximum of signed integral types.  */
#define INT8_MAX (127)
#define INT16_MAX (32767)
#define INT32_MAX (2147483647)
#define INT64_MAX (9223372036854775807LL)
#define INT_MAX INT32_MAX
#define LONG_MAX INT32_MAX

/* Maximum of unsigned integral types.  */
#define UINT8_MAX (255)
#define UINT16_MAX (65535)
#define UINT32_MAX (4294967295U)
#define UINT64_MAX (18446744073709551615ULL)
#define UINT_MAX UINT32_MAX
#define ULONG_MAX UINT32_MAX

#endif
