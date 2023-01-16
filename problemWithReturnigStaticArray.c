#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

// Array of Integers
// We will return the address of the first elements
// The function description should be like int * myFunction()
// This problem will solve next section. 

int *createArray();
void printfArtay(int * array,int size)
{
    for(int i=0; i<size;i++)
    {
        printf("array[%d]=%d\n",i,array[i]);
    }
}

int main()
{
    int *array;
    array=createArray();
    printfArtay(array,ARRAY_SIZE);
    return 0;
}


int *createArray()
{

    int myArray[ARRAY_SIZE];
    printf("Enter %d elements to your array.\n",ARRAY_SIZE);
    for(int i=0;i<ARRAY_SIZE;i++)
    {

        printf("Enter array[%d] = \n",i);
        scanf("%d",&myArray[i]);
    }
    return myArray;

}