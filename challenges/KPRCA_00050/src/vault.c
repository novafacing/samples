#include "vault.h"

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include "endian.h"
#include "io.h"
#include "protocols.h"
#include "time.h"

#define VAULT_SIZE 500

typedef struct {
  void *data;
  uint32_t len;  // Changed to explicit uint32_t for consistency
} locker_t;

typedef struct {
  uint64_t open_time;  // Explicit 64-bit time
  uint32_t open_length;
  locker_t contents[VAULT_SIZE];
  uint32_t num_contents;
} vault_t;

static vault_t *the_vault;

static void write_msg(uint8_t cmd, void *data, size_t n) {
  uint8_t hdr[7];

  n++; /* for cmd byte */
  *(uint16_t *)&hdr[0] = htobe16(PROTOCOL_VAULT);
  if (n < 0x8000) {
    *(uint16_t *)&hdr[2] = htobe16((uint16_t)n);
    hdr[4] = cmd;
    write_bytes(hdr, 5);
  } else {
    *(uint32_t *)&hdr[2] = htobe32((uint32_t)n | 0x80000000);
    hdr[6] = cmd;
    write_bytes(hdr, 7);
  }

  write_bytes(data, n - 1);
}

void init_vault() {
  the_vault = malloc(sizeof(vault_t));
  if (!the_vault) return;

  /* 2014-12-24 23:00:00 */
  the_vault->open_time = ((uint64_t)2208988800ULL + 1419462000ULL) * 1000ULL;
  the_vault->open_length = (3600U * 1000U);
  the_vault->num_contents = 0;
}

// Helper function to validate locker pointer
static int is_valid_locker(const locker_t *locker) {
  if (!the_vault) return 0;

  ptrdiff_t offset = (uintptr_t)locker - (uintptr_t)&the_vault->contents[0];

  return (locker >= &the_vault->contents[0] &&
          locker < &the_vault->contents[the_vault->num_contents] &&
          offset % sizeof(locker_t) == 0);
}

int handle_msg_vault(void *data, unsigned int n) {
  uint8_t cmd;

  if (n < 1) return 0;

  cmd = *(uint8_t *)data;
  n--;
  data = (uint8_t *)data + 1;

  if (cmd == 1) /* LIST */ {
    uint32_t *buf = malloc(the_vault->num_contents * 8);
    if (buf == NULL) {
      write_msg(1, NULL, 0);
    } else {
      for (uint32_t i = 0; i < the_vault->num_contents; i++) {
        // Convert pointer to 32-bit index for transmission
        buf[i * 2] = htobe32((uint32_t)(i * sizeof(locker_t)));
        buf[i * 2 + 1] = htobe32(the_vault->contents[i].len);
      }

      write_msg(1, buf, the_vault->num_contents * 8);
      free(buf);
    }
  } else if (cmd == 2) /* STORE */ {
    uint32_t id = htobe32(store_in_vault(0, data, n));
    write_msg(2, &id, sizeof(uint32_t));
  } else if (cmd == 3 && n >= 4) /* UPDATE */ {
    uint32_t id = betoh32(*(uint32_t *)data);
    id = htobe32(store_in_vault(id, (uint8_t *)data + 4, n - 4));
    write_msg(3, &id, sizeof(uint32_t));
  } else if (cmd == 4 && n >= 4) /* RETRIEVE */ {
    void *outdata;
    unsigned int len;
    uint32_t id = betoh32(*(uint32_t *)data);
    outdata = retrieve_from_vault(id, &len);
    if (outdata == NULL)
      write_msg(4, NULL, 0);
    else
      write_msg(4, outdata, len);
    free(outdata);
  }

  return 1;
}

uint32_t store_in_vault(uint32_t id, void *data, unsigned int n) {
  locker_t *locker;

  if (id == 0) {
    if (the_vault->num_contents >= VAULT_SIZE) return 0;
    locker = &the_vault->contents[the_vault->num_contents++];
  } else {
    // Convert transmitted ID back to locker pointer
    locker = (locker_t *)((uintptr_t)&the_vault->contents[0] + id);
    if (!is_valid_locker(locker)) return 0;
  }

  void *copy = malloc(n);
  if (copy == NULL) return 0;

  memcpy(copy, data, n);
  locker->data = copy;
  locker->len = n;

  // Convert locker pointer to 32-bit offset for transmission
  return (uint32_t)((uintptr_t)locker - (uintptr_t)&the_vault->contents[0]);
}

void *retrieve_from_vault(uint32_t id, unsigned int *outlen) {
  if (current_time >= the_vault->open_time &&
      current_time < the_vault->open_time + the_vault->open_length) {
    // Convert transmitted ID back to locker pointer
    locker_t *locker = (locker_t *)((uintptr_t)&the_vault->contents[0] + id);
    if (!is_valid_locker(locker)) return NULL;

    void *retval = locker->data;
    *outlen = locker->len;
    locker->data = NULL;
    locker->len = 0;
    return retval;
  }

  return NULL;
}