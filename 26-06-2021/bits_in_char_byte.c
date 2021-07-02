#include <stdio.h>

struct byte
{
    unsigned int b0: 1;
    unsigned int b1: 1;
    unsigned int b2: 1;
    unsigned int b3: 1;
    unsigned int b4: 1;
    unsigned int b5: 1;
    unsigned int b6: 1;
    unsigned int b7: 1;
};

union u_byte
{
    struct byte b;
    char ch;
};

int main()
{
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);
    union u_byte u_b;
    u_b.ch = num;
    printf("The bits are: %u%u%u%u%u%u%u%u", u_b.b.b7, u_b.b.b6, u_b.b.b5, u_b.b.b4, u_b.b.b3, u_b.b.b2, u_b.b.b1, u_b.b.b0);
    return 0;
}


/* Output

Enter a number: 2
The bits are: 00000010


Enter a number: 7
The bits are: 00000111


Enter a number: 8
The bits are: 00001000

*/
