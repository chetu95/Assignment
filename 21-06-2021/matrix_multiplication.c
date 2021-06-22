#include <stdio.h>

int main()
{
    int a[100][100], b[100][100], c[100][100], m, n, p, q, i, j, k;
    printf("Enter the no. of rows and columns for 1st matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the no. of rows and columns for 2nd matrix: ");
    scanf("%d %d", &p, &q);
    
    if(n != p) {
        printf("Matrix multiplication is not possible");
    } else {
      printf("Enter elements of 1st matrix:\n");
      for(i=0; i<m; i++) {
          for(j=0; j<n; j++) {
             scanf("%d", &a[i][j]);    
          }
        }
    
        printf("Enter elements of 2nd matrix:\n");
        for(i=0; i<p; i++) {
            for(j=0; j<q; j++) {
              scanf("%d", &b[i][j]);    
            }
        } 
        
        for(i=0; i<m; i++) {
            for(j=0; j<q; j++) {
                c[i][j] = 0;
                for(k=0; k<n; k++) {
                    c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                }
            }
        }
        
        printf("The resultant matrix is:\n");
        for(i=0; i<m; i++) {
            for(j=0; j<q; j++) {
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}


/* Output

Enter the no. of rows and columns for 1st matrix: 2 2 
Enter the no. of rows and columns for 2nd matrix: 2 2 
Enter elements of 1st matrix:
1 2 
3 4 
Enter elements of 2nd matrix:
1 2 
3 4 
The resultant matrix is:
7 10 
15 22 


Enter the no. of rows and columns for 1st matrix: 1 3
Enter the no. of rows and columns for 2nd matrix: 3 1 
Enter elements of 1st matrix:
1 2 3
Enter elements of 2nd matrix:
4
5
6
The resultant matrix is:
32 

*/
