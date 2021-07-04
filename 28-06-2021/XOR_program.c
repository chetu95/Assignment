#include <stdio.h>

int main()
{
    int i;
    unsigned int arr[13] = {20,20,40,40,13,13,11,88,88,99,99,11,11};
    unsigned int res = arr[0];
    
    for(i=1; i<13; i++) {
        res = res ^ arr[i];
    }
    
    printf("The array is: ");
    for(i=0; i<13; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nThe resultant after XOR operation is: %u", res);
    return 0;
}



/* Output

The array is: 20 20 40 40 13 13 11 88 88 99 99 11 11 
The resultant after XOR operation is: 11

*/
