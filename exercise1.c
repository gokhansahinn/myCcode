#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
//Given a sorted array of integers [1,3,3,5,6,7,7,7,8,12,12] size 11
//Create a new, dynamically allocated array, with no duplicates.[1,3,5,6,7,8,12] size=7
int *noDuplicate(int *array,int sizeArray)
{
    int count=1;
    int i,j=0;
    int *newArray;
    int size=11;
    for(i=0;i<size-1;i++)
    {
        if(array[i]!=array[i+1])
          { 
            count++;
            printf("count= %d\n",count);
          }     
    }
    newArray=(int *)malloc(sizeof(int)*count);
    //[ , , , , , , , ]
    for(i=0;i<size-1;i++)
    {
        if(array[i] !=array[i+1])
        {
            newArray[j]=array[i];
            j++;
            printf("j= %d\n",j);
        }
        //[1,3,5,6,7,8,12]
    }
    newArray[j]=array[i];
    return newArray;
}
void printArray(int *array, int size)
{
    for(int i=0; i<size;i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
}
int main()
{
    int array[]={1,3,3,5,6,7,7,7,8,12,12};
    int *noDuplicateArray;
    //func....
    noDuplicateArray=noDuplicate(array,11);
    printf("Array is Duplicated\n\n");
    printArray(array,sizeof(array)/sizeof(int));
    printf("Array is NOTDuplicated\n\n");
    printArray(noDuplicateArray,7);

    return 0;
}