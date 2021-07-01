#include <stdio.h>

#define GETLSB(n) n & 1 

int main()
{
    unsigned int num;
    printf("Enter the number: ");
    scanf("%u", &num);
    if(GETLSB(num) == 1) {
        printf("The entered number is odd");
    } else {
        printf("The entered number is even");
    }
    return 0;
}


/* Output

Enter the number: 3
The entered number is odd


Enter the number: 8
The entered number is even

*/
