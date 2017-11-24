// K&R
// exersice 1.10

#include "stdio.h"

int main()
{
  int c, symbol;
  symbol=0;
  while ((c=getchar()) != EOF) {
    if (c=='\t') {
      printf("\\t");
      symbol=1;
    }
    if (c=='\\') {
      printf("\\\\");
      symbol=1;
    }
    if (c=='\b') {
      printf("\\b");
      symbol=1;
    }
    if(symbol==0){
      putchar(c);
      symbol=0;
    }
      
  }
  return 0;
}
