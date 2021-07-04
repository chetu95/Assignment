#include <stdio.h>

#define SETBITS(n, pos, valBits)  (n | (valBits<<pos))
#define CLEARBITS(n, pos, valBits)  (n & ~(valBits<<pos))

unsigned int power(unsigned int x, unsigned int y) {
    unsigned int res = 1, i;
    for(i=1; i<=y; i++) {
        res = res*x;
    }
    return res;
}

int main()
{
    unsigned int num, position, nbits, choice, valueOfBits;
    printf("Enter the number: ");
    scanf("%u",&num);
    printf("Enter the starting bit position: ");
    scanf("%u", &position);
    printf("Enter the number of bits to be manipulated: ");
    scanf("%u", &nbits);
    printf("1. Set the bits");
    printf("\n2. Clear the bits");
    printf("\nEnter your choice: ");
    scanf("%u", &choice);
    
    // calculate 2*(n-1) i.e the actual value of bits to be set/unset
    valueOfBits = (power(2, nbits)) - 1;
    
    if(choice == 1) {
       num = SETBITS(num, position, valueOfBits);
    } else if(choice == 2) {
       num = CLEARBITS(num, position, valueOfBits);    
    }
    printf("The number after bit manipulation is: %u", num);
    return 0;
}


/* Output

Enter the number: 15
Enter the starting bit position: 1
Enter the number of bits to be manipulated: 4
1. Set the bits
2. Clear the bits
Enter your choice: 2
The number after bit manipulation is: 1


Enter the number: 0
Enter the starting bit position: 2
Enter the number of bits to be manipulated: 4
1. Set the bits
2. Clear the bits
Enter your choice: 1
The number after bit manipulation is: 60


Enter the number: 8
Enter the starting bit position: 0
Enter the number of bits to be manipulated: 3
1. Set the bits
2. Clear the bits
Enter your choice: 1
The number after bit manipulation is: 15

*/
