/*

Author: Joe Rogers <joe@cromulence.co>

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
#include <libcgc.h>

#include "input.h"
#include "queue.h"
#include "receive.h"
#include "stdlib.h"
#include "transmit.h"

extern double wall_clock;
extern double max_wall_clock;

int main(void) {
  puts("Welcome to the network queuing simulator");

  if (InitInterface()) {
    puts("Unable to init interface\n");
    _terminate(-1);
  }

  if (InitReceive()) {
    puts("Unable to init packet generator\n");
    _terminate(-1);
  }

  if (InitQueues()) {
    puts("Failed to initialize queues\n");
    _terminate(-1);
  }

  while (1) {
    RX();
    TX();
    // increment wall_clock time since we don't have
    // any packets to TX or RX
    wall_clock += 0.00001;
    if (wall_clock > max_wall_clock) {
      break;
    }
  }

  PrintStats();

  DestroyQueues();

  _terminate(0);
}
