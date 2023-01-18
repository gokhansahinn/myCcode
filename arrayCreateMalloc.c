#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

//Array of Integers
//We will return the address of the first element
int * createArray(int size)
{
    int *a;
    a=(int* )malloc(size*sizeof(int));
    if(!a)
    {
        printf("you have got some ERROR when trying to allocate... Check yout memory\n");
        exit(1);
    }

    for(int i=0;i<size;i++)
    {
        printf("enter %d data for array: \n",i);
        scanf("%d",&a[i]);
    }
    return a;



}
void printfArray(int * array,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}
int main()
{
    int *array;
    int arraySize;
    printf("Enter Array Size: ");
    scanf("%d",&arraySize);
    array=createArray(arraySize);
    printfArray(array,arraySize);
    return 0;
}