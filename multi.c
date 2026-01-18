// matrix multiplication
#include <stdio.h>

int main() {
    int i,j;
    int n;
    printf("enter array size \n");
    scanf("%d" , &n);
    int a[n][n];
    printf("enter array elements \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d" , &a[i][j]);
        }
    }
    printf(" first array in matrix form \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d \t" , a[i][j]);
        }
        printf("\n");
    }
    int b[n][n];
    printf("enter second array elements \n");
    for(i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
        {
            scanf("%d" , &b[i][j]);
        }
    }
    printf("second array in matrix form \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d \t" , b[i][j]);
        }
        printf("\n");
    }
    int c[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            c[i][j] = 0;
        }
    }
    for(i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
        {
            for( int k=0; k<n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("resultant matrix is \n");
    for( i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d \t" , c[i][j]);
        }
        printf("\n");
    }
    
     return 0;
}