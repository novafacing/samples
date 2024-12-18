#ifndef STDLIB_H_
#define STDLIB_H_

#include <libcgc.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#define isinf(x) __builtin_isinf(x)
#define isnan(x) __builtin_isnan(x)

extern int fdprintf(intptr_t fd, const char *fmt, ...);
extern int sprintf(char *s, const char *fmt, ...);

long strtol(const char *str, char **endptr, int base);
unsigned long strtoul(const char *str, char **endptr, int base);

extern void *malloc(size_t size);
extern void *calloc(size_t nmemb, size_t size);
extern void *realloc(void *ptr, size_t size);
extern void free(void *ptr);
extern size_t malloc_size(void *ptr);

static void exit(int ret) { _terminate(ret); }

#endif /* !STDLIB_H_ */
