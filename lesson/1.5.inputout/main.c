//
// copy input out;
// ver. 01

#include "stdio.h"

int main()
{
  int c;
  c = getchar();
  
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
  return 0;
}

