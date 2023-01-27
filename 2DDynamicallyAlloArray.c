#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define FUNC1
//#define FUNC2

int** allocate2Dmatrix()
{
    int ** matrix;
    int rows,columns;
    
    printf("Enter rows number for matrix: ");
    scanf("%d",&rows);
    matrix = (int **)calloc(rows,sizeof(int));// allocating pointer of pointer. 
    if(!matrix) return NULL;
    for(int i=0 ; i<rows ; i++) // allocating an array of Integers for every row.
    {
        printf("Enter colums for %d. rows of matrix: ",i+1);
        scanf("%d",&columns);
        matrix[i]=(int *)calloc(columns,sizeof(int));
        if(!matrix[i])
            return NULL;
    }
    return matrix;
}
int** allocate2Dmatrix2(int rows,int* columnsArray)
{
    int ** matrix;
    matrix = (int **)calloc(rows,sizeof(int));// allocating pointer of pointer. 
    if(!matrix) return NULL;
    for(int i=0 ; i<rows ; i++) // allocating an array of Integers for every row.
    {
        matrix[i]=(int *)calloc(columnsArray[i],sizeof(int));
        if(!matrix[i])
            return NULL;
    }
    return matrix;
}

int main()
{
    int **myMatrix;
  
    #ifdef FUNC1
    int *columnsArray;
    int rows;
    printf("Enter number of rows for the 2D Matrix: ");
    scanf("%d",&rows);
    columnsArray=(int *)calloc(rows,sizeof(int));
    for(int i=0; i<rows ; i++)
    {
        printf("Enter a columns number for 2D matrix: ");
        scanf("%d",&columnsArray[i]);
    }
    myMatrix = allocate2Dmatrix2(rows,columnsArray);
    #endif

    #ifdef FUNC2
    myMatrix = allocate2Dmatrix();
    #endif
    return 0;
}