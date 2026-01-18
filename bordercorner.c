// sum of border and corner elements
#include <stdio.h>

int main() {
    int i,j;
    int n;
    printf("enter size of the matrix \n");
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
    int sumb = 0;
    int sumc = 0;
    int k = n-1;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i==0 || i==k || j==0 || j==k)
            sumb = sumb + a[i][j];
            if( ( i==0 || i==k) && ( j==0 || j==k))
            sumc = sumc + a[i][j];
        }
    }
    printf("sum of border elements = %d \n" , sumb);
    printf("sum of corner elements = %d " , sumc);
     return 0;
}