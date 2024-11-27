/*
 * Copyright (C) Narf Industries <info@narfindustries.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "bytecode.h"

#include <stdint.h>

#ifdef DEBUG
#define DEBUG_BYTECODE 1
#endif

int bytecode_exec(uint8_t *buf, uint16_t sz) {
  int ret = SUCCESS;
  uint8_t *cursor = buf + BASE_ADDR_SZ;
  uint8_t *addr = NULL;
  uint32_t opc = 0;
  uint8_t imm = 0;
  uint16_t off = 0;

  // Get the base address from the buffer (first 4 bytes)
  uint32_t stored_base = *(uint32_t *)buf & 0x00FFFFFF;

  // Create full address keeping lowest byte from buf pointer and using
  // stored_base for upper bytes
  uintptr_t actual_ptr = (uintptr_t)buf;
  uintptr_t base_addr = ((uintptr_t)stored_base << 8) & ((uintptr_t)-1 << 8);
  uintptr_t merged_addr = base_addr | (actual_ptr & 0xFF);

  // Calculate scratch base address
  uintptr_t scratch_base = merged_addr + BASE_ADDR_SZ + sz;

#ifdef DEBUG
  fprintf(stderr,
          "[D] %s | ENTER bytecode_exec; base_addr = 0x%08x, scratch_base = "
          "0x%08x\n",
          __func__, base_addr, scratch_base);
#endif

  while (cursor < (buf + sz)) {
    opc = (cursor[0] << 0) | (cursor[1] << 8) | (cursor[2] << 16) |
          (0x00 << 24);  // force NULL-term (this byte can be anything)
    // 4 - space
    imm = cursor[5];
    // 6 - space
    off = cursor[7];
    addr = (uint8_t *)(scratch_base + off);

#ifdef DEBUG
    fprintf(stderr, "[D] %s | operation: '%s', imm = 0x%02x, off = 0x%02x\n",
            __func__, (char *)&opc, imm, off);
#endif

    // Poor man's strcmp.  Call it libc diversification.
    switch (opc) {
      case OPCODE_NUL:
#ifdef DEBUG_BYTECODE
        fprintf(stderr, "\t[D] %s | *0x%08x = 0x00\n", __func__, addr);
#endif
        *addr = 0x00;
        break;

      case OPCODE_SET:
#ifdef DEBUG_BYTECODE
        fprintf(stderr, "\t[D] %s | *0x%08x = 0x%02x\n", __func__, addr, imm);
#endif
        *addr = imm;
        break;

      case OPCODE_ADD:
#ifdef DEBUG_BYTECODE
        fprintf(stderr, "\t[D] %s | *0x%08x += 0x%02x\n", __func__, addr, imm);
#endif
        *addr += imm;
        break;

      case OPCODE_SUB:
#ifdef DEBUG_BYTECODE
        fprintf(stderr, "\t[D] %s | *0x%08x -= 0x%02x\n", __func__, addr, imm);
#endif
        *addr -= imm;
        break;

      case OPCODE_MUL:
#ifdef DEBUG_BYTECODE
        fprintf(stderr, "\t[D] %s | *0x%08x *= 0x%02x\n", __func__, addr, imm);
#endif
        *addr *= imm;
        break;

      case OPCODE_DIV:
        if (0 == imm) {
#ifdef DEBUG_BYTECODE
          fprintf(stderr, "\t[D] %s | *0x%08x = 0xAA\n", __func__, addr);
#endif
          *addr = 0xAA;
        } else {
#ifdef DEBUG_BYTECODE
          fprintf(stderr, "\t[D] %s | *0x%08x /= 0x%02x\n", __func__, addr,
                  imm);
#endif
          *addr /= imm;
        }
        break;

      case OPCODE_SHR:
#ifdef DEBUG_BYTECODE
        fprintf(stderr, "\t[D] %s | *0x%08x >>= 0x%02x\n", __func__, addr, imm);
#endif

        // Match Python behavior / avoid undefined.
        if (imm >= 8) {
          *addr = 0;
        } else {
          *addr >>= imm;
        }

        break;

      case OPCODE_SHL:
#ifdef DEBUG_BYTECODE
        fprintf(stderr, "\t[D] %s | *0x%08x <<= 0x%02x\n", __func__, addr, imm);
#endif

        // Match Python behavior / avoid undefined.
        if (imm >= 8) {
          *addr = 0;
        } else {
          *addr <<= imm;
        }

        break;

      default:
#ifdef DEBUG_BYTECODE
        fprintf(stderr, "\t[D] %s | *0x%08x unchanged; ignoring UNK opcode\n",
                __func__, addr, imm);
#endif
        break;
    }

    cursor += OPERATION_SZ;
  }

bail:
  return ret;
}
