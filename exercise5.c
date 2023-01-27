#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
// Write a function that receives an array of integers.
// This function should be of a "void" type.
// Create and copy all elements from the received array to a new one.
// The new array (copied) should be passed by reference to the caller function.

/// @brief This Function copy array new using passed by reference
/// @param array source array that we want to copied.
/// @param sizeArray size of source array  
/// @param pArray this pointer to pointer that want to new array.
void copyArrrayNewOne(int * array, int sizeArray, int **pArray)
{
    int * newArray = (int *)malloc(sizeof(int)*sizeArray);
    memcpy(newArray,array,sizeof(int)*sizeArray);
    *pArray = newArray;
}
void copyArrrayNewOne2(int * array, int sizeArray, int **pArray)
{
    * pArray = (int *)malloc(sizeof(int)*sizeArray);
    if(*pArray != NULL)
    {
        for(int i=0; i<sizeArray ; i++)
        {
            (*pArray)[i]=array[i];
        }
    }

}
void printArray(int * array,int size)
{
    for(int i=0; i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n\n");
}
int main()
{
    int * p;
    int array[]={12,25,35,36,36,45,85};
    int size = sizeof(array)/sizeof(int);
    printf("This array before copied\n");
    printArray(array,size);
    // copyArrrayNewOne(array,size,&p);
    copyArrrayNewOne2(array,size,&p);
    printf("This array after copied\n");
    printArray(p,size);
    free(p);
    return 0;
}