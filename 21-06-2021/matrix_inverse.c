#include <stdio.h>

int main()
{
    int arr[100][100], inv[100][100], m, n, i, j;
                      
    printf("Enter the size of the matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix:\n");
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            inv[j][i] = arr[i][j];
        }
    }
    
    printf("The inverse of the matrix is:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            printf("%d ", inv[i][j]);
        }
        printf("\n");
    }
    return 0;
}


/* Output

Enter the size of the matrix: 3 2 
Enter the elements of the matrix:
1 2
3 4 
5 6
The inverse of the matrix is:
1 3 5 
2 4 6 


Enter the size of the matrix: 2 2 
Enter the elements of the matrix:
1 6
4 8
The inverse of the matrix is:
1 4 
6 8 

*/
