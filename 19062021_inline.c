#include <stdio.h>

#define sqr_marco(x) x*x

static inline int square(int n) {
    return n*n;
}

int main()
{
   int num, temp;
   printf("Enter a number: ");
   scanf("%d", &num);
   temp = num;
   printf("Square of number using macro: %d\n", sqr_marco(num++));
   num = temp;
   printf("Square of number using inline function: %d\n", square(num++));
   return 0;
}


/* Output

Enter a number: 5
Square of number using macro: 30
Square of number using inline function: 25


Enter a number: 4
Square of number using macro: 20
Square of number using inline function: 16

*/
