#ifndef DIFFER_H_
#define DIFFER_H_
#include "sfile.h"

void compare_files(SFILE *lfile, SFILE *rfile, int ignore_ws,
                   int treat_as_ascii);
void clear_cache(int file_num);

#endif
