#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define ARRAY_SIZE 5
int main()
{
    int *arr;
    int sizeofArray;
    printf("Enter size of array: ");
    scanf("%d",&sizeofArray);
    arr = (int *)calloc(sizeofArray,sizeof(int));
    if(arr != NULL)
    {
        printf("Calloc is succeded!\n");
    }
    else
        printf("Calloc is not succeded!\n");
//    arr = (int *)malloc(sizeofArray*sizeof(int));
    for(int i=0;i<sizeofArray;i++)
    {
        printf("array[%d] = %d\n",i,arr[i]);
    }
    
    return 0;
}