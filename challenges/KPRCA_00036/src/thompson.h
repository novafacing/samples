#ifndef THOMPSON_H_
#define THOMPSON_H_
#include <libcgc.h>

void debug_print_re(unsigned char *re);
int retorpn(unsigned char *infix, size_t size, unsigned char **rpn);

#endif
