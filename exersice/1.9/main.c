// K&R
// exersice 1.9

#include "stdio.h"

int main()
{
  int c, space;
  space=0;
  while ((c=getchar()) != EOF) {

    if (c == ' ') {
      if (space == 0) {
	putchar(c);
	space=1;
      }
    }
    if (c != ' ') {
      putchar(c);
      space=0;
    }
  }
  return 0;
}
