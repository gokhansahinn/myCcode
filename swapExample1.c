#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define SIZE_1 5
#define SIZE_2 6

//Exercise:
// recursively Reverse An array
// Example1: {1,3,4,2,0} --> [0,2,4,3,1]
// Example2: {2,4,6,5,3,9} --> [9,3,5,3,9]

void swap(int *ptr1, int *ptr2)
{
    int temp= *ptr1;     
    *ptr1 = * ptr2;
    *ptr2 = temp;
}
void reverseArrayRecursively(int *array,int size)
{
    if(size > 1)
    {
        // printf("I am here\n");
        swap(array,array+size-1);
        reverseArrayRecursively(array+1,size-2);
    }
}

void printArray(int *array,int size)
{
    for(int i = 0; i<size ;i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
}
int main()
{
    int array[]={1,3,4,2,0};
    int a=5,b=2;
 
    reverseArrayRecursively(array,SIZE_1);
    printArray(array,SIZE_1);
    return 0;
}   