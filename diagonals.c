// finding sum of left and right diagonals
#include <stdio.h>

int main() {
    int i,j;
    int r , c;
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
    printf("array in matrix form \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d \t" , a[i][j]);
        }
        printf("\n");
    }
    int sum1 = 0;
    int sum2 = 0;
    int k = n-1;
    for(i=0; i<n; i++)
    {
        for( j=0; j<n; j++)
        {
            if( i==j )
            sum1 = sum1 + a[i][j];
            if( i+j == k)
            sum2 = sum2 + a[i][j];
        }
    }
    printf("sum of left diagonal elements is %d \n" , sum1);
    printf("sum of right diagonal elements is %d" , sum2);
     return 0;
}