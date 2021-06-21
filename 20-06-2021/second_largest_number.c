#include <stdio.h>

int main()
{
    int arr[100], n, i, max1, max2, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    if(n == 1) {
        printf("The second largest number is: %d", arr[0]);
    } else {
        max1 = arr[0];
        max2 = arr[1];
    
        if(max2 > max1) {
            temp = max1;
            max1 = max2;
            max2 = temp;
        }
    
        for(i=1; i<n; i++) {
            if()
        }
    
    }
    
   
   
   
    return 0;
}
