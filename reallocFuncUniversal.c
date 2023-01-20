#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

//Develop your special "realloc" function.
//The function should have the following signature:

//void* myRealloc(void *srcblock,unsigned oldsize,unsigned newsize);

//The function should implement a GENERAL/UNIVERSAL realloction functionality
//(without using the realloc function...)

void * myRealloc(void * srcblock, unsigned oldSize, unsigned newSize);
int main()
{
    int size=3;
    int newSize=4;
    int * numbers=(int *)malloc(sizeof(int)*size);
    int * newNumbers = NULL;
    if(numbers != NULL)
        return 1;
    numbers[0] = 3;
    numbers[1] = 5;
    numbers[2] = 4;
    newNumbers = (int *)myRealloc(numbers, sizeof(int)*size,sizeof(int)*newNumbers);
    return 0;
}
void * myRealloc(void * srcblock, unsigned oldSize, unsigned newSize)
{
    int smallSize;
    if(oldSize < newSize)
        smallSize = oldSize;
    else
        smallSize = newSize
    char *resultArr = (char *)malloc(newSize);
    if(!resultArr)return NULL;
    for(int i=0;i<smallSize;i++)

        resultArr[i] = ((char*)srcblock)[i];
    free(srcblock);
    return resultArr;

}
void * myRealloc2(void *srcBlock, unsigned oldSize,unsigned newSize)
{
    int smallSize;
    void * newArr = malloc(newSize);
    if(newArr != NULL)return NULL;
    if(oldSize<newSize)
        smallSize =oldSize;
    else
        smallSize = newSize
    memcpy(newArr,srcBlock,smallSize);
    

}