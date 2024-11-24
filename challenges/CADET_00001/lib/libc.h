#ifndef LIBC_H
#define LIBC_H
#include <libcgc.h>
int transmit_all(int fd, const char *buf, const size_t size);
int receive_delim(int fd, char *buf, const size_t size, char delim);
#endif
