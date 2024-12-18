#ifndef STDDEF_H_
#define STDDEF_H_

typedef long int ptrdiff_t;

#ifndef _LIBCGC_H
typedef long unsigned int size_t;
typedef long int ssize_t;

#undef NULL
#define NULL 0
#endif

#define offsetof(TYPE, MEMBER) __builtin_offsetof(TYPE, MEMBER)

#endif /* !STDDEF_H_ */
