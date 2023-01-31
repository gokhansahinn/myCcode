#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
// Write 2 functions that should:
// 1. Create a "Lower Triangular Matrix" and return it.
// 2. Create an "Upper Triangular Matrix" and return it.
int ** lowerTriangular(int row , int *columnsArray)
{
    int ** newArray;
    newArray = (int **)calloc(row,sizeof(int *));
    if(!newArray) return NULL;
    for(int i =0 ; i<row ; i++)
    {
        newArray[i] = (int *)calloc(columnsArray[i],sizeof(int));
        if(!newArray) return NULL;
    }
    return newArray;
}
int ** upperTriangular(int row , int *columnsArray)
{
    int ** newArray;
    newArray = (int **)calloc(row,sizeof(int *));
    if(!newArray) return NULL;
    for(int i =0 ; i<row ; i++)
    {
        newArray[i] = (int *)calloc(columnsArray[i],sizeof(int));
        if(!newArray) return NULL;
    }
    return newArray;
}
void getValueTriangularMAtrix(int ** matrix, int row , int * columnsArray)
{
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<columnsArray[i]; j++)
        {
            printf("Enter value for array[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}
void printTriangularMatrix(int ** matrix, int row , int *columnsArray)
{

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<columnsArray[i]; j++)
        {
            printf("Enter value for array[%d][%d] =%d\n",i,j,matrix[i][j]);
        }
        printf("\n\n");
    }

}
int main()
{
    int **lowerTriangularMatrix=NULL;
    int **upperTriangularMatrix=NULL;
    int row,j=0;
    printf("Enter a value of row: ");
    scanf("%d",&row);
    int *columnsLowerArray = (int *)calloc(row,sizeof(int));
    int *columnsUpperArray = (int *)calloc(row,sizeof(int));
    for(int i=0 ; i<row ; i++)
    {
        /*this array keep columns number for lower triangular matrix. */
        columnsLowerArray[i] = i+1;
    }
    for(int i=row ; i>0 ; i--)
    {
        /*this array keep columns number for upper triangular matrix. */
        columnsUpperArray[j] = i;
        j++;

    }
    printf("-------------LOWER TRIANGULAR ARRAY-------------\n");
    lowerTriangularMatrix = lowerTriangular(row, columnsLowerArray);
    getValueTriangularMAtrix(lowerTriangularMatrix,row,columnsLowerArray);
    printf("*************LOWER TRIANGULAR ARRAY*************\n\n");
    printTriangularMatrix(lowerTriangularMatrix,row,columnsLowerArray);
    printf("-------------UPPER TRIANGULAR ARRAY-------------\n");
    upperTriangularMatrix = upperTriangular(row, columnsUpperArray);
    getValueTriangularMAtrix(upperTriangularMatrix,row,columnsUpperArray);
    printf("*************UPPER TRIANGULAR ARRAY*************\n\n");
    printTriangularMatrix(upperTriangularMatrix,row,columnsUpperArray);


    
    return 0;
}