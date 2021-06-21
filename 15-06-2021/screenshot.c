#include <stdio.h>

int main()
{
   int x=10, y=3;
   {
       int x=100, z=10;
       printf("%d %d", x, z);
   }
   
   printf("%d %d", x, z);
   return 0;
}


//Output: Error. The code will not compile, as z is declared inside the block and is not visible outside it.
