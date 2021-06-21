#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0, rem;
    while(n != 0) {
       rem = n % 10;
       sum = sum + rem;
       n = n / 10;
   }
   return sum;
}

int main()
{
   int num;
   printf("\nEnter a number: ");
   scanf("%d",&num);
   while(num >= 10) {
       num = sumOfDigits(num);
   }
   printf("The sum of digits is: %d", num);
   return 0;
}



/* Output

Enter a number: 91
The sum of digits is: 1


Enter a number: 96
The sum of digits is: 6

Enter a number: 45
The sum of digits is: 9

*/
