#include <stdio.h>

int main(void)
{
   int i = 6;
   float j = 3.14;
   char *s = "Hello World!";
   
   printf("%s i = %d and f = %f!\n", s, i, j);

   int x = 1;
   if(x){
      printf("%d is true\n", x);
   }
}