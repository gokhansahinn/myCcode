#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
// Write a function that allocates a 2D Dynamic Array and Passes it by Reference
void allocate2DMatrixByRef(int *** matrix,int row,int columns)
{
    
    *matrix=(int **)calloc(row,sizeof(int *));
    //if(!(*matrix)) return NULL;
    for(int i = 0 ; i < row ; i++)
    {
        (*matrix)[i]=(int *)calloc(columns,sizeof(int));
        //if(!(*matrix)[i]) return NULL;
    }
    
}
void getValueMatrix(int ** matrix,int row, int columns)
{
    for(int i = 0; i < row ; i++)
    {
        for(int j = 0 ; j < columns ; j++)
        {
            printf("enter a value for matrix[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n\n");
}
void printMatrix(int ** matrix,int row, int columns)
{
    for(int i = 0; i < row ; i++)
    {
        for(int j = 0 ; j < columns ; j++)
        {
            printf("matrix[%d][%d] = %d\n",i,j,matrix[i][j]);
        }
        printf("\n\n");
    }
}
int main()
{
    int row,columns;
    int **myMatrix;
    printf("enter value of row: ");
    scanf("%d",&row);
    printf("enter value of columns: ");
    scanf("%d",&columns);
    allocate2DMatrixByRef(&myMatrix,row,columns);
    getValueMatrix(myMatrix,row,columns);
    printf("Created Matrix By Reference\n");
    printMatrix(myMatrix,row,columns);



    return 0;
}