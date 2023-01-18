#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

//Function : 
//      -Receive 2 Arrays of the same size
//      -Swap between their values one-by-one --> Q(n) time complexity

#define SIZE 5

void swap(int *val1,int * val2)
{
    int temp;
    temp=*val1;
    *val1=*val2;
    *val2=temp;
}
void swapArrayOn(int *array1, int *array2)
{
    for(int i=0;i<SIZE;i++)
    {
        swap(&array1[i],&array2[i]);
    }
}

void swapArrayO1(void **ptr1,void **ptr2)
{
    void *temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;


}
void printArray(int *array)
{
        for(int i=0;i<SIZE;i++)
        {
            printf("%d ",array[i]);
        }
        printf("\n");
}
int * generateArray(int size)
{
    int * array;
    array = (int *)malloc(size*sizeof(int));
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    return array;
}
int main()
{
    int sizeArray1,sizeArray2;
    int *Array1,*Array2;
    printf("Enter size for array1 \n");
    scanf("%d",&sizeArray1);

    printf("Enter size for array2 \n");
    scanf("%d",&sizeArray2);

    Array1 = generateArray(sizeArray1);
    Array2 = generateArray(sizeArray2);

    printf("Array Values Before SWAP\n");
    printArray(Array1);
    printArray(Array2);
    //swapArrayOn(Array1,Array2);
    swapArrayO1(&Array1,&Array2);
    printf("\n");
    printf("Array Values After SWAP\n");
    printArray(Array1);
    printArray(Array2);

    return 0;
}