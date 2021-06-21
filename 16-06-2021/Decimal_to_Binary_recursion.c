#include <stdio.h>

void func(int n) {
    if(n == 0) {
        return;
    } else {
        func(n/2);
        printf("%d ", n%2);
    }
}

int main()
{
   int num;
   printf("Enter a decimal number: ");
   scanf("%d", &num);
   func(num);
   return 0;
}


/* Output

Enter a decimal number: 6
1 1 0 

Enter a decimal number: 8
1 0 0 0 

Enter a decimal number: 11
1 0 1 1 

*/
