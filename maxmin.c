// finding maximum and minimum row and column wise
#include <stdio.h>

int main() {
    int i,j;
    int r , c;
    printf("enter row size \n");
    scanf("%d" , &r);
    printf("enter column size \n");
    scanf("%d" , &c);
    int a[r][c];
    printf("enter array elements \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d" , &a[i][j]);
        }
    }
    printf("array in matrix form \n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d \t" , a[i][j]);
        }
        printf("\n");
    }
    int max , min;
    for(i=0; i<r; i++)
    {
        max = a[i][0];
        for(j=0; j<c; j++)
        {
            if(a[i][j] > max)
            max = a[i][j];
        }
        printf("maximum element of %d row is = %d" , i+1 , max);
    }
    for( j=0; j<c; j++)
    {
        min = a[0][j];
        for(i=0; i<r; i++)
        {
            if(a[i][j] < min)
            min = a[i][j];
        }
        printf("minimum element of %d column is = %d" , j+1 , min);
    }
    return 0;
}