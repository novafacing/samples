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
#include "generator.h"

#include <libcgc.h>

#include "input.h"
#include "mt.h"
#include "queue.h"
#include "receive.h"
#include "stdlib.h"

extern double wall_clock;

// pkt struct to hold packets generated by the *Generator() functions
pkt NextPkt;

// packet rate for generator
double gen_rate;

// wall_clock time of the last generated packet
double last_pkt_time;

// Obtain the necessary information and set up the random packet generator
int InitRandom(void) {
  char buf[10];
  unsigned int gen_bps;
  int len;

  last_pkt_time = 0;
  gen_bps = 0;
  while (gen_bps == 0 || gen_bps > MAX_SPEED) {
    printf(
        "What average bit rate do you want the random generator to produce? (1 "
        "- @d bps): ",
        MAX_SPEED);
    if ((len = readUntil(buf, 9, '\n')) == -1) {
      return (-1);
    }
    gen_bps = (unsigned int)atoi(buf);
  }

  // calculate the packet rate (sec/pkt) for the given bps
  // assuming a random distribution of packet sizes between
  // 64 and 1500.  So, an average of 5744 bits per packet.
  gen_rate = ((MAX_PKT_SIZE - MIN_PKT_SIZE) / 2 * 8.0) / gen_bps * 2.0;

  return (0);
}

// generate packets based on random arrival times, sizes and priorities
int RandomGenerator(void) {
  double delta;
  unsigned int bytes;
  unsigned int pri;

  // don't gen a new packet if one is already waiting
  if (NextPkt.bytes) {
    return (1);
  }

  // generate a random value between 0 and 1
  // and multiply that by the generation rate to get the
  // time until the next packet
  delta = rand_mt() / 4294967295.0;
  delta *= gen_rate;

  // generate a random int between 64 and 1500
  bytes = (rand_mt() % 1436) + 64;

  // generate a random int between 0 and 63
  pri = rand_mt();
  pri = pri & 0x0000003f;

  NextPkt.timestamp = last_pkt_time + delta;
  last_pkt_time = NextPkt.timestamp;
  NextPkt.bytes = bytes;
  NextPkt.priority = pri;

  return (1);
}

// Obtain the necessary information and set up the poisson packet generator
int InitPoisson(void) {
  char buf[10];
  unsigned int gen_bps;
  int len;

  last_pkt_time = 0;
  gen_bps = 0;
  while (gen_bps == 0 || gen_bps > MAX_SPEED) {
    printf(
        "What average bit rate do you want the poisson generator to produce? "
        "(1 - @d bps): ",
        MAX_SPEED);
    if ((len = readUntil(buf, 9, '\n')) == -1) {
      return (-1);
    }
    gen_bps = (unsigned int)atoi(buf);
  }

  // calculate the packet rate (pkt/sec) for the given bps
  // assuming a random distribution of packet sizes between
  // 64 and 1500.  So, an average of 5744 bits per packet.
  gen_rate = gen_bps / ((MAX_PKT_SIZE - MIN_PKT_SIZE) / 2 * 8.0);

  return (0);
}

// calculate the time delta for the next packet
double CalcDelta(unsigned int rnd, double rate) {
  return (-logf(1.0 - (rnd / 4294967296.0)) / rate);
}
// generate packets based on poisson arrival times, random sizes and random
// priorities
int PoissonGenerator(void) {
  double delta;
  unsigned int bytes;
  unsigned int pri;

  // don't gen a new packet if one is already waiting
  if (NextPkt.bytes) {
    return (1);
  }

  // generate a random value between 0 and 1
  // and calculate the poisson distribution
  delta = CalcDelta(rand_mt(), gen_rate);

  // generate a random int between 64 and 1500
  bytes = (rand_mt() % 1436) + 64;

  // generate a random int between 0 and 63
  pri = rand_mt();
  pri = pri & 0x0000003f;

  NextPkt.timestamp = last_pkt_time + delta;
  last_pkt_time = NextPkt.timestamp;
  NextPkt.bytes = bytes;
  NextPkt.priority = pri;

  return (1);
}

// state variables for Manual packet generator
int repeat;
pkt *ManualRingBuffer;
pkt *ManualCurrPkt;
// Obtain the necessary information and set up the manual packet generator
int InitManual(void) {
  char buf[20];
  int len;
  char *timestamp_s;
  double timestamp;
  char *bytes_s;
  int bytes;
  char *priority_s;
  int priority;
  int i;
  unsigned int pkt_count;
  int count;
  pkt *p;

  last_pkt_time = 0;
  ManualCurrPkt = NULL;

  // see if the manual packet generator should keep looping through the manually
  // provided packet stream
  repeat = -1;
  while (repeat == -1) {
    printf(
        "Should the packet generator repeat the manually entered packets? "
        "(y,n): ");
    if ((len = readUntil(buf, 2, '\n')) == -1) {
      return (-1);
    }
    if (buf[0] == 'y') {
      repeat = 1;
    } else if (buf[0] == 'n') {
      repeat = 0;
    }
  }

  // see how many packets they'll be sending
  count = -1;
  while (count < MIN_MANUAL_PKTS || count > MAX_MANUAL_PKTS) {
    printf("How many packets would you like to enter? (@d - @d): ",
           MIN_MANUAL_PKTS, MAX_MANUAL_PKTS);
    if ((len = readUntil(buf, 10, '\n')) == -1) {
      return (-1);
    }
    count = atoi(buf);
  }

  // allocate a ring buffer to hold the packets
  if (InitRingBuffer(count, &ManualRingBuffer)) {
    return (-1);
  }
  p = ManualRingBuffer;

  // read in the manually entered packets
  printf("Enter the packets, one per line in this format:\n");
  printf(
      "time since last packet (s, ##.######),length (bytes 64-1500),priority "
      "(0-63)\n");
  while (count--) {
    if ((len = readUntil(buf, 18, '\n')) == -1) {
      return (-1);
    }
    if (len > 0) {
      // strip out newlines
      if (buf[len - 1] == '\n') {
        buf[len - 1] = '\0';
      }
    }

    // parse the line
    // seconds at the front
    timestamp_s = buf;

    // bytes next
    bytes_s = strchr(buf, ',');
    if (bytes_s == NULL) {
      puts("Invalid bytes");
      return (-1);
    }
    bytes_s[0] = '\0';
    bytes_s++;

    // finally, priority
    priority_s = strchr(bytes_s, ',');
    if (priority_s == NULL) {
      puts("Invalid priority");
      return (-1);
    }
    priority_s[0] = '\0';
    priority_s++;

    // sanity check the inputs
    // timestamp
    for (i = 0; i < strlen(timestamp_s); i++) {
      if (!strchr("0123456789.", timestamp_s[i])) {
        puts("Invalid timestamp");
        return (-1);
      }
    }
    timestamp = atof(timestamp_s);
    if (timestamp < 0) {
      puts("Invalid timestamp");
      return (-1);
    }
    // bytes
    for (i = 0; i < strlen(bytes_s); i++) {
      if (!strchr("0123456789", bytes_s[i])) {
        puts("Invalid bytes");
        return (-1);
      }
    }
    bytes = atoi(bytes_s);
    if (bytes < 64 || bytes > 1500) {
      puts("Invalid bytes");
      return (-1);
    }
    // priority
    for (i = 0; i < strlen(priority_s); i++) {
      if (!strchr("0123456789", priority_s[i])) {
        puts("Invalid priority");
        return (-1);
      }
    }
    priority = atoi(priority_s);
    if (priority < 0 || priority > 63) {
      puts("Invalid priority");
      return (-1);
    }

    // everything looks good, stick the packet into the ring buffer
    p->timestamp = timestamp;
    p->bytes = bytes;
    p->priority = priority;
    p = p->next;
  }

  return (0);
}
// generate packets based on Manually provided arrival times, sizes and
// priorities
int ManualGenerator(void) {
  // don't gen a new packet if one is already waiting
  if (NextPkt.bytes) {
    return (1);
  }

  // see if we've looped around to the top of the ring buffer
  if (ManualCurrPkt != NULL) {
    if (ManualCurrPkt == ManualRingBuffer) {
      // were we told to repeat?
      if (!repeat) {
        // no, so just bail
        return (0);
      }
    }
  } else {
    // if ManualCurrPkt is null, this is our first call to ManualGenerator
    // so start at the top of the packet list
    ManualCurrPkt = ManualRingBuffer;
  }

  // return the ManualCurrPkt
  NextPkt.timestamp = last_pkt_time + ManualCurrPkt->timestamp;
  last_pkt_time = NextPkt.timestamp;
  NextPkt.bytes = ManualCurrPkt->bytes;
  NextPkt.priority = ManualCurrPkt->priority;
  ManualCurrPkt = ManualCurrPkt->next;

  return (1);
}
