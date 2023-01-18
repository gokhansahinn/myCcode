#include <stdio.h>
#include <stdint.h>

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
void printArray(int *array)
{
        for(int i=0;i<SIZE;i++)
        {
            printf("%d ",array[i]);
        }
        printf("\n");
}
int main()
{
    int Array1[SIZE]={1,3,6,8,10};
    int Array2[SIZE]={2,2,4,11,17};
    printf("Array Values Before SWAP\n");
    printArray(Array1);
    printArray(Array2);
    swapArrayOn(Array1,Array2);
    printf("\n");
    printf("Array Values After SWAP\n");
    printArray(Array1);
    printArray(Array2);

    return 0;
}