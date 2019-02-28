#include <stdio.h>
 int main()
 {
   int x,y;
   int table_max = 100;
   int number_max = 20;

   for(x = 1; x <=table_max; x++)
   {
     for(y = 0; y <=number_max; y++)
     {
       printf("%d x %d = %d\n", x, y, x*y);
     }
     printf("\n");
   }
   return 0;
 }
