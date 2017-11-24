#include "stdio.h"

int main()
{
  int c;
  //int e;
  while ((c = getchar()) != EOF) {
    //    e = (c = getchar()) != EOF;
    printf("%d", (c = getchar()) != EOF);
  }

  //  printf()
  //  return 0;
}
