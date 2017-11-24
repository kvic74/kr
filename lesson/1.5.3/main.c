// K&R
// 1.5.3. count line
// version 01

#include "stdio.h"

int main()
{
  int c, nl;
  nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++nl;
    }
  }
  printf("count of line -- %d\n", nl);
  return 0;
}
