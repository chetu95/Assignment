#include <stdio.h>

#define GETPOS(n, pos) (n>>pos) & 1

int main()
{
    unsigned int num, position;
    printf("Enter the number: ");
    scanf("%u", &num);
    printf("Enter the position where the bit is to be found: ");
    scanf("%u", &position);
    printf("The bit present in number %u at position %u is: %d", num,position, GETPOS(num, position));
    return 0;
}


/* Output

Enter the number: 3
Enter the position where the bit is to be found: 1
The bit present in number 3 at position 1 is: 1


Enter the number: 8
Enter the position where the bit is to be found: 0
The bit present in number 8 at position 0 is: 0


Enter the number: 1
Enter the position where the bit is to be found: 0
The bit present in number 1 at position 0 is: 1

*/
