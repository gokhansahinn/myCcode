#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>


void create1DByReference(int sizeArr,int ** p)
{
    int *newArray;
    newArray = (int *)malloc(sizeArr*sizeof(int));
    for(int i =0; i<sizeArr ; i++)
    {
        printf("Enter value for array: ");
        scanf("%d",&newArray[i]);
    }
    *p=newArray;
}
// Second additional solution.
void create1DByReference2(int sizeArr,int ** p)
{
    *p= (int *)malloc(sizeArr*sizeof(int));
    for(int i =0; i<sizeArr ; i++)
    {
        printf("Enter value for array: ");
        scanf("%d",&(*p)[i]);
    }
}
int main()
{
    int * ptr;
    int size;
    printf("Enter size of Array: ");
    scanf("%d",&size);
    create1DByReference(size,&ptr);
    for(int i=0;i<size;i++)
    {
        printf("array[%d] = %d\n",i,ptr[i]);
    }
    return 0;
}