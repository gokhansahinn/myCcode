#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
/* EXERCISE*/

/* 1. Implement 2 function that receive a Dynamic 2D Array(Pointer to Pointer)*/
/*          a. First function receives 2 rows;
               The function should swap between 2 rows in O(1). Make it Universal.
            b. Second function should receives 2 columns.
               The function should SWAP between the 2 columns in O(n);
*/
#define SWAP_ROW
//#define SWAP_COLUMNS

void swapRow2DMatrix(int ** myMatrix, int row1, int row2)
{
    int * temp;
    temp = myMatrix[row1];
    myMatrix[row1] = myMatrix[row2];
    myMatrix[row2] = temp;
}
void swapColums2DMatrix(int ** myMatrix, int columns1, int columns2,int row)
{
    int temp;
    for(int i = 0 ; i< row ; i++)
    {
        temp = myMatrix[i][columns1];
        myMatrix[i][columns1] = myMatrix[i][columns2];
        myMatrix[i][columns2]=temp;
        temp = 0;
    }
}
void getValueforMatrix(int ** myMatrix , int rows , int columns)
{
    for(int i = 0 ; i < rows ; i++)
    {
        myMatrix[i]= (int *)calloc(columns,sizeof(int));
    }
    for(int i = 0 ; i<rows ; i++)
    {
        for(int j = 0 ; j <columns ; j++)
        {
            printf("Enter a value of myMatrix[%d][%d]: ",i,j);
            scanf("%d",&myMatrix[i][j]);
        }
    }

}
void printMatrix(int ** matrix, int row, int columns)
{
    for(int i = 0 ; i<row ; i++)
    {
        for(int j = 0 ; j <columns ; j++)
        {
            printf("myMatrix[%d][%d] = %d\n",i,j,matrix[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int rows,columns;
    int rows1,rows2;
    int columns1, columns2;
    printf("Enter value of row for matrix: ");
    scanf("%d",&rows);
    printf("Enter value of columns for matrix: ");
    scanf("%d",&columns);    
    int ** myMatrix = (int **)calloc(rows,sizeof(int*));
    getValueforMatrix(myMatrix, rows, columns);
    printf("this is before swapping operation for rows\n\n");
    printMatrix(myMatrix,rows,columns);
    #ifdef SWAP_ROW
    printf("Enter rows1: ");
    scanf("%d",&rows1);
    printf("Enter rows2: ");
    scanf("%d",&rows2);
    swapRow2DMatrix(myMatrix,rows1,rows2);
    printf("this is after swapping operation for rows\n\n");
    printMatrix(myMatrix,rows,columns);
    #endif
    #ifdef SWAP_COLUMNS
    printf("Enter columns1: ");
    scanf("%d",&columns1);
    printf("Enter columns2: ");
    scanf("%d",&columns2);
    swapColums2DMatrix(myMatrix,columns1,columns2,rows);
    printf("this is after swapping operation for columns\n\n");
    printMatrix(myMatrix,rows,columns);
    #endif
    return 0;
}