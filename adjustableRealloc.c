#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

//  TASK: Write a function that creates and fills with with values a dynamic array.
//        The size of the array is UNKNOWN in advance.
//        what is knowm is that once we read a value of "-1", the function should stop.
//        reading inputs from user, and it should return array and pass its size.  

int * adjustableReallocation(int * arraySize)
{
    int num, lastIndex=0,size=2;
    int * array;
    int * temp;
    printf("Enter a number for array: ");
    scanf("%d",&num);
    if(num == -1)
    {
        return NULL;
        *arraySize = 1;        
    }
    else
    {
        temp = (int *)malloc(sizeof(int)*size);
        if(!temp)return NULL;
        array = temp;
    }
    while(num != -1)
    {
        if(lastIndex == size)
        {
            size = size *2;
            temp = (int *)realloc(array,size*sizeof(int));
            if(!temp) return NULL;
            array =temp;
           

        }
        array[lastIndex]=num;
        lastIndex++;
        printf("Enter a number for array: ");
        scanf("%d",&num);
    }
    array = (int *)realloc(array,sizeof(int)*lastIndex);
    *arraySize =lastIndex;
    return array;


}
int main()
{
    int size=0;
    int * array;
    array = adjustableReallocation(&size);
    if(array != NULL)
    {
        for(int i=0; i<size;i++)
        {
            printf("array[%d] = %d\n",i,array[i]);
        }
        printf("size of array = %d\n",size);
    }
    else
    {
        printf("Array is Empty!!\n");
        printf("size of array = %d\n",size);
    }

    return 0;
}