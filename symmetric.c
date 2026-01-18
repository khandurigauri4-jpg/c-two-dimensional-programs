// check if a matrix is symmetric or not
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
    int temp = 0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(a[i][j] != a[j][i])
            {
                temp = 1;
                break;
            }
        }
    }
    if( temp == 0)
    printf("symmetric matrix ");
    else
    printf("not a symmetric matrix");
     return 0;
}