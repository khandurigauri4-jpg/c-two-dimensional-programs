// checking if the matrix contains saddle point or not
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
    int temp = 0;
    int x , max , min;
    for( i=0; i<n; i++)
    {
        min = a[i][0];
        x = 0;
        for( j=0; j<n; j++)
        {
            if(a[i][j] < min)
            {
                min = a[i][j];
                x = j;
            }
        }
        max = a[0][x];
        for(int k=0; k<n; k++)
        {
            if(a[k][x] > max)
            max = a[k][x];
        }
        if(max == min)
        temp = 1;
    }
    if(temp == 1)
    printf("saddle point exists");
    else
    printf("saddle point does not exist");
    return 0;
}