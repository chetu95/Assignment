#include <stdio.h>

int main()
{
    int arr[100], rot_arr[100], n, rot_num, i,j;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number of elements to be left rotated: ");
    scanf("%d", &rot_num);
    
    
    for(i=rot_num, j=0; i<n; i++, j++) {
        rot_arr[j] = arr[i];
    }

    for(i=0; i<rot_num; i++,j++) {
        rot_arr[j] = arr[i];
    }
    
    printf("The rotated array is: ");
    for(i=0; i<n; i++) {
        printf("%d ", rot_arr[i]);
    }
    return 0;
}


/* Output

Enter the size of the array: 7
Enter the array elements: 1 2 3 4 5 6 7
Enter the number of elements to be left rotated: 5
The rotated array is: 6 7 1 2 3 4 5 


Enter the size of the array: 4
Enter the array elements: 1 10 5 2
Enter the number of elements to be left rotated: 2
The rotated array is: 5 2 1 10 

*/
