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
#include "TreasureObject.h"

#include "Program.h"

DefineClass(TreasureObject, MapObject)

    DefineFunction(TreasureObject, void, $init) {
  this->m_icon = '$';
  this->m_value = $($g->m_random, randint, 40) * 10;
}

DefineFunction(TreasureObject, int, on_collide, Player *p) {
  if (this->m_icon == '$') {
    p->m_money += this->m_value;
    this->m_icon = ' ';
  }
  return 0;
}

DefineFunction(TreasureObject, void, serialize, Buffer *buf) {
  $(buf, write_number, 1);  // used by MapObject_deserialize
  $(buf, write_number, this->m_icon);
  $(buf, write_number, this->m_value);
}

DefineFunction(TreasureObject, void, deserialize, Buffer *buf) {
  unsigned int type = $(buf, read_number);
  ASSERT_OR_RAISE(type == 1, EXC_BAD_STATE);
  this->m_icon = $(buf, read_number);
  this->m_value = $(buf, read_number);
}
