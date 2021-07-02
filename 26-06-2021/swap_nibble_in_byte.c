#include <stdio.h>

struct nibble
{
    unsigned int b0: 1;
    unsigned int b1: 1;
    unsigned int b2: 1;
    unsigned int b3: 1;
};

struct byte
{
    struct nibble n1;
    struct nibble n2;
};

union u_byte
{
    struct byte b;
    char ch;
};

int main()
{
    unsigned int num;
    struct nibble temp;
    printf("Enter a number: ");
    scanf("%u", &num);
    
    union u_byte u_b;
    u_b.ch = num;
    
    printf("The bits before swapping: %u%u%u%u %u%u%u%u", u_b.b.n2.b3, u_b.b.n2.b2, u_b.b.n2.b1, u_b.b.n2.b0,
    u_b.b.n1.b3, u_b.b.n1.b2, u_b.b.n1.b1, u_b.b.n1.b0); 

    temp = u_b.b.n1;
    u_b.b.n1 = u_b.b.n2;
    u_b.b.n2 = temp;

    printf("\nThe bits after swapping: %u%u%u%u %u%u%u%u", u_b.b.n2.b3, u_b.b.n2.b2, u_b.b.n2.b1, u_b.b.n2.b0,
    u_b.b.n1.b3, u_b.b.n1.b2, u_b.b.n1.b1, u_b.b.n1.b0); 
    return 0;
}


/* Output

Enter a number: 5
The bits before swapping: 0000 0101
The bits after swapping: 0101 0000


Enter a number: 3
The bits before swapping: 0000 0011
The bits after swapping: 0011 0000


Enter a number: 8
The bits before swapping: 0000 1000
The bits after swapping: 1000 0000

*/
