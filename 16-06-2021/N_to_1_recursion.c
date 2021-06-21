#include <stdio.h>

void func(int n) {
    if(n == 0) {
        return;
    } else {
        printf("%d ", n);
        func(n-1);
    }
}

int main()
{
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);
   func(num);
   return 0;
}


/* Output

Enter a number: 10
10 9 8 7 6 5 4 3 2 1 

Enter a number: 6
6 5 4 3 2 1 

*/
