// arrange each row in ascending order
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
    int temp;
    for( i=0; i<n; i++)
    {
        for( j=0; j<n-1; j++)
        {
            for( int k =0; k<n-1-j; k++)
            {
                if(a[i][k] > a[i][k+1])
                {
                    temp = a[i][k];
                    a[i][k] = a[i][k+1];
                    a[i][k+1] = temp;
                }
            }
        }
    }
    printf("matrix after sorting each row \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d \t" , a[i][j]);
        }
        printf("\n");
    }

    return 0;
}