#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
/// @brief 
/// @param sourceArray source array is array that we want deleted element that mark any index
/// @param sizeSource size of source array
/// @param index which index
/// @param digit How many digits will cancel? 
/// @return  
void *removeArray(int * sourceArray,unsigned sizeSource,unsigned index,unsigned digit)
{
    void * newArray = malloc(sizeSource-digit);
    if(!newArray) return NULL;
    memcpy(newArray,sourceArray,index);
    memcpy((char *)newArray+index,(char *)sourceArray+index+digit,sizeSource-index-digit);
    return newArray;
}
void printArr(int* arr, int size)
{
	int i;
	for(i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n\n");
}
void takeGrades(int * array ,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("Enter %d. grades: ",i);
        scanf("%d",&array[i]);
    }
}
int main()
{
    int * grades = malloc(sizeof(int)*4);
    int * updateGrades;
    if(!grades) return NULL;
    int index=0;
    takeGrades(grades,4);
    printf("Enter index for which coloum: ");
    scanf("%d",&index);
    printf("the Array before Deleting process\n");
    printArr(grades,4);
    printf("the Array after Deleting process\n");
    updateGrades=(int *)removeArray(grades,4*sizeof(int),index*sizeof(int),1*sizeof(int));
    printArr(updateGrades,3);
    return 0;
}