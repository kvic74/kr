// K&R
// count tab, space, newline
// exersice 1.8.

#include "stdio.h"

int main()
{
  int c, cnt;
  cnt =0;
  while ((c=getchar()) != EOF) {
    if (c == '\t') {
      ++cnt;
    }
    if (c == ' ') {
      ++cnt;
    }
    if (c == '\n') {
      ++cnt;
    }

  }
  printf("%d -- count symbols\n", cnt);
  return 0;
}
