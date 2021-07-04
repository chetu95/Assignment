#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if((num & (num-1)) == 0) {
        printf("Entered number is a power of 2");
    } else {
        printf("Entered number is not a power of 2");
    }

    return 0;
}



/* Output

Enter a number: 4
Entered number is a power of 2


Enter a number: 7 
Entered number is not a power of 2


Enter a number: 1
Entered number is a power of 2

*/
