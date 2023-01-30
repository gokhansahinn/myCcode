#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int** a;
    int rows,coulums;
    printf("Enter row number for 2D array: ");
    scanf("%d",&rows);
    a=(int **)calloc(rows,sizeof(int *));
    for(int i=0 ; i<rows; i++)
    {
        printf("Enter coulums number %d .rows for 2D array: ",i+1);
        scanf("%d",&coulums);
        a[i]=(int *)calloc(coulums,sizeof(int));
    }
    for(int i = 0; i<rows ; i++)
    {
        for(int j = 0 ; j< coulums ; j++)
        {
            printf("Enter a value a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("a[4][0] = %d\n",a[4][0]);
    return 0;
}