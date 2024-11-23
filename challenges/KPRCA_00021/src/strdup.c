#include "strdup.h"

#include <libcgc.h>
#include <stdlib.h>
#include <string.h>

char *strdup(char *s) {
  int sz = 0;
  if (s) {
    sz = strlen(s) + 1;
    char *d = malloc(sz);
    if (d) {
      memset(d, 0, sz);
      memcpy(d, s, sz);
      return d;
    }
  }
  return NULL;
}
