#include <stdio.h>

void func(int n) {
    if(n == 0) {
        return;
    } else {
        func(n-1);
        printf("%d ", n);
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

Enter a number: 4
1 2 3 4 


Enter a number: 11
1 2 3 4 5 6 7 8 9 10 11 

*/
