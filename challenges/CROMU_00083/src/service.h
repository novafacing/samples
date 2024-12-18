
/*

Author: Steve Wood <swood@cromulence.com>

Copyright (c) 2016 Cromulence LLC

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

#include "auth.h"
#include "filesystem.h"

#ifndef SERVICE_H
#define SERVICE_H

#define MAX_COMMAND_LEN (1024)

typedef struct {
  char *command;
  int (*handler)(int, char **);

} commandsTableType;

int tokenize(char *string, char delimiter, char **args[]);
int makeFile(int argcount, char **args);
int eraseFile(int argcount, char **args);
int listFiles(int argcount, char **args);
int overwriteFile(int argcount, char **args);
int dumpFile(int argcount, char **args);
int readFromEnd(int argcount, char **args);
int readFirstN(int argcount, char **args);
int copyFile(int argcount, char **args);
int setPermissions(int argcount, char **args);
int makeMemFile(int argcount, char **args);

#endif
