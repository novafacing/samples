/*
 * Copyright (c) 2015 Kaprica Security, Inc.
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
#pragma once

#include "database.h"
#include "emulator.h"

class Engine {
 private:
  bool is_bmp(unsigned char *data, unsigned int len);
  void process_bmp(unsigned char *data, unsigned int len);
  bool is_exe(unsigned char *data, unsigned int len);
  void process_exe(unsigned char *data, unsigned int len);

 public:
  Engine();
  ~Engine();

  bool process(unsigned char *data, unsigned int len);
  bool update_rules(unsigned char *data, unsigned int len);
  void whitelist(unsigned char *data, unsigned int len);

 private:
  Database d_db;
  Database d_whitelist;

  unsigned char *d_heap;
  bool d_malware;
};
