#include <stdio.h>

#define CLEARBIT(n, pos) (n & ~(1<<pos-1))
#define SETBIT(n, pos) (n | (1<<pos-1))
#define TOGGLEBIT(n, pos) (n ^ (1<<pos-1))

int main()
{
    unsigned int num, position, choice;
    printf("Enter the number: ");
    scanf("%u", &num);
    printf("Enter the bit position to be manipulated: ");
    scanf("%u", &position);
    printf("1. Clear the bit\n");
    printf("2. Set the bit\n");
    printf("3. Toggle the bit\n");
    printf("Enter your choice: ");
    scanf("%u", &choice);
    
    if(choice == 1) {
        num = CLEARBIT(num, position);
    } else if(choice == 2) {
         num = SETBIT(num, position);
    } else if(choice == 3) {
         num = TOGGLEBIT(num, position);
    }
    printf("The number after bit manipulation is: %u", num);
    return 0;
}


/* Output

Enter the number: 2
Enter the bit position to be manipulated: 1
1. Clear the bit
2. Set the bit
3. Toggle the bit
Enter your choice: 2
The number after bit manipulation is: 3


Enter the number: 3
Enter the bit position to be manipulated: 2
1. Clear the bit
2. Set the bit
3. Toggle the bit
Enter your choice: 1
The number after bit manipulation is: 1


Enter the number: 3
Enter the bit position to be manipulated: 1
1. Clear the bit
2. Set the bit
3. Toggle the bit
Enter your choice: 3
The number after bit manipulation is: 2


Enter the number: 1
Enter the bit position to be manipulated: 3
1. Clear the bit
2. Set the bit
3. Toggle the bit
Enter your choice: 3
The number after bit manipulation is: 5

*/
