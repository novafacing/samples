/*
 * Copyright (c) 2014 Kaprica Security, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */
#ifndef FILAMENTS_H_
#define FILAMENTS_H_
#ifdef FILAMENTS

#include <libcgc.h>
#include <wrapper.h>

typedef void (*start_func_t)(void *userdata);

typedef struct fib {
  struct fib *next;
  unsigned int id;
  void *stack;
  jmp_buf env;
  start_func_t start_func;
  void *userdata;
} fib_t;

void filaments_init();
void filaments_new(start_func_t func, void *userdata);
void filaments_yield();
fib_t *filaments_current();
int __filaments_transmit(int fd, const void *buf, size_t count,
                         size_t *tx_bytes);
int __filaments_receive(int fd, void *buf, size_t count, size_t *rx_bytes);
int __filaments_fdwait(int nfds, fd_set *readfds, fd_set *writefds,
                       const struct timeval *timeout, int *readyfds);
int __filaments_allocate(size_t length, int is_X, void **addr);
int __filaments_deallocate(void *addr, size_t length);
int __filaments_random(void *buf, size_t count, size_t *rnd_bytes);
void filaments_switch(fib_t *new_fib);

#endif /* FILAMENTS */
#endif /* !FILAMENTS_H_ */
