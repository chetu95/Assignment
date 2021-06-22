#include <stdio.h>

int isNumInArray(int t[100], int n, int num ) {
    int i;
    for(i=0; i<n; i++) {
        if(t[i] == num) {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[100], new_arr[100], n, i, max1, max2, temp, count=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    //Store only unique elements into a new array.
    for(i=0; i<n; i++) {
        if(i == 0) {
            new_arr[count] = arr[i];
            count++;
        } else {
            if(!isNumInArray(new_arr, count, arr[i])) {
                new_arr[count] = arr[i];
                count++;
            }
        }
        
    }
    
    n = count;
    
    if(n == 1) {
        max2 = new_arr[0];
    } else {
        max1 = new_arr[0];
        max2 = new_arr[1];
    
        if(max2 > max1) {
            temp = max1;
            max1 = max2;
            max2 = temp;
        }
    
        for(i=2; i<n; i++) {
            if(new_arr[i] > max1) {
                max2 = max1;
                max1 = new_arr[i];
            } else if(new_arr[i] > max2) {
                max2 = new_arr[i];
            }
        }
    }
    printf("The second largest number is: %d", max2);
    return 0;
}


/* Output

Enter the size of the array: 2
Enter the array elements: 11 67
The second largest number is: 11


Enter the size of the array: 5
Enter the array elements: 10 20 10 6 7
The second largest number is: 10

*/
