#include <stdio.h>

int main()
{
    int n, arr[100], i, j, sum, max_sum = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<n; i++) {
        sum = 0;
        for(j=i; j<n; j++) {
            sum = sum + arr[j];
            max_sum = sum > max_sum ? sum : max_sum;
        }
    }
    
    printf("The maximum sum of sub array is: %d", max_sum);
    return 0;
}



/* Output 

Enter the size of the array: 5
Enter the elements of the array: 1 -2 3 -1 2
The maximum sum of sub array is: 4


Enter the size of the array: 4
Enter the elements of the array: 1 2 3 4 
The maximum sum of sub array is: 10

*/
