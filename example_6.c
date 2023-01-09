#include <stdio.h>
#include <stdint.h>
#include <string.h>


int arraySum(int *arrptr,int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum +=*(arrptr+i);
    }

    return sum;
}

int sumArray(int array[],int size)
{
    int sum=0;
    for (int i=0;i<size;i++)
    {
        sum +=array[i];
    }
    return sum;
}

int main()
{

    int arr[3]={1,2,3};
    int *arrptr=arr;

    printf("sum of array with pointer = %d\n",arraySum(arrptr,sizeof(arr)/sizeof(arr[0])));
    printf("sum of array without pointer = %d\n",sumArray(arr,sizeof(arr)/sizeof(arr[0])));

    return 0;
}