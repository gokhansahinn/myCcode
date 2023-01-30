#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

//Create Matrix
//Assign Values
//Print Matrix
void createMatrix(int **newArray, int rows,int* columnsArray)
{
    for(int i=0; i<rows ; i++)
    {
        printf("Enter a column number for %d. rows: ",i+1);
        scanf("%d",&columnsArray[i]);
        newArray[i]= (int *)calloc(columnsArray[i],sizeof(int));
    }
}
void assignValuesMatrix(int **array,int rows, int* columnsArray)
{
    int value;
    for(int i = 0; i<rows ; i++)
    {
        for(int j=0; j<columnsArray[i] ; j++)
        {
            printf("Enter value for array[%d][%d]: ",i,j);
            scanf("%d",&value);
            array[i][j]=value;
        }

    }
}
void printValuesMatrix(int **array,int rows, int* columnsArray)
{
    for(int i = 0; i<rows ; i++)
    {   
        for(int j=0; j<columnsArray[i] ; j++)
        {
            printf("array[%d][%d] = %d\n",i,j,array[i][j]);  
        }
        printf("\n");
    }

}
int main()
{
    int ** myMatrix = NULL;
    int * columnsArray;
    int rows;
    printf("enter a row number for 2D Matrix: ");
    scanf("%d",&rows);
    columnsArray = (int* )calloc(rows,sizeof(int));
    myMatrix = (int **)calloc(rows, sizeof(int *));
    createMatrix(myMatrix, rows,columnsArray);
    for(int i=0 ; i<rows;i++)
    {
        printf("columnsArray[%d]=%d\n",i,columnsArray[i]);
    }
    printf("\n");
    assignValuesMatrix(myMatrix,rows,columnsArray);
    printValuesMatrix(myMatrix,rows,columnsArray);
    
    return 0;
}