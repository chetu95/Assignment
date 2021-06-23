#include <stdio.h>

void my_memcpy(void* src, void* dest, int size) {
    int i;
    char* src_ptr = (char*) src;
    char* dest_ptr = (char*) dest;
    
    for(i=0; i<size; i++) {
        dest_ptr[i] = src_ptr[i];
    }
}

int main()
{
    int arr1[100], arr2[100], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0; i<n; i++) {
         scanf("%d", &arr1[i]);
    }
    
    my_memcpy(arr1, arr2, n*sizeof(int));
    
    printf("Copied array is:\n");
    for(i=0; i<n; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}


/* Output

Enter the number of elements: 5
Enter the elements: 10 20 30 40 50
Copied array is:
10 20 30 40 50 


Enter the number of elements: 4
Enter the elements: 20 10 60 34
Copied array is:
20 10 60 34 

*/
