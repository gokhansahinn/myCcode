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
    a=(int **)calloc(rows,sizeof(int));
    for(int i=0 ; i<rows; i++)
    {
        printf("Enter coulums number %d .rows for 2D array: ",i+1);
        scanf("%d",&coulums);
        a[i]=(int *)calloc(coulums,sizeof(int));
    }
    a[1][2]=20;
    printf("a[1][2] = %d\n",a[1][2]);
    return 0;
}