#include <stdio.h>
/* print temperature 0, 20, ..., 300 */

 int main()
 {
   int fahr, celsius;
   int lower, upper, step;
   
   lower = 0; /* lower t */
   upper = 300; /* upper t */
   step = 20; /* step t */

   fahr = lower;
   while (fahr <= upper) {
     celsius = 5*(fahr-32)/9;
     printf("%d\t%d\n", fahr, celsius);
     fahr = fahr + step;
   }
		  
   /* return 0;  */
   
 }

