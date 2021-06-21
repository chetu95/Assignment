#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int isSorted = 1;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1]) {
            isSorted = 0;
            break;
        }
    }

    if(isSorted) {
        printf("The array is in ascending order");
    } else {
         printf("The array is not in ascending order");
    }
    return 0;
}


/* Output

Enter the size of the array: 4
12 34 56 78
The array is in ascending order

Enter the size of the array: 5
12 34 41 10 45
The array is not in ascending order

*/
