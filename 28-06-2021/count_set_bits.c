#include <stdio.h>

int main()
{
    unsigned int num, count = 0;
    printf("Enter a number: ");
    scanf("%u", &num);
    
    while(num != 0) {
        if(num & 1) {
            count++;
        }
        num = num >> 1;
    }
    
    printf("The number of bits that are set is: %u", count);
    return 0;
}


/* Output

Enter a number: 0
The number of bits that are set is: 0


Enter a number: 3
The number of bits that are set is: 2


Enter a number: 4
The number of bits that are set is: 1


Enter a number: 7
The number of bits that are set is: 3

*/
