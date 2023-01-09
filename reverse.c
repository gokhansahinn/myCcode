#include <stdio.h>
#include <stdint.h>
#include <string.h>



//Exercise:
//Write a function that receives an array of characters
//The function should "reverse" the array
//this my function for integer.
void reverseArray(int * array, int size)
{
    int temp=0;
    for(int i=0;i<(size/2);i++)
    {
        temp=array[(size-1)-i];
        array[(size-1)-i]=array[i];
        array[i]=temp;
    }
}
//reverse array for int array
void swapInt(int *ptr1,int *ptr2)
{
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
void reverseIntArray(int *array,int size)
{
    for(int i=0; i<size/2;i++)
    {
        swapInt(&array[i],&array[size-1-i ]);
    }
}
void printForInt(int *array,int size)
{
    for(int i=0; i<size;i++)
    {
        printf("%d\n",array[i]);
    }
}

//reverse array for char array

void swap(char *ptr1, char *ptr2)
{   
    char temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2=temp;
}
void reverseIt(char *arr,int size)
{
    for(int i=0; i<size/2; i++)
    {
        swap(&arr[i],&arr[size-1-i]);
    }
}

void printArray(char *arr,int size)
{

    for(int i=0; i<size;i++)
    {
        printf("%c\n",arr[i]);
    }
}


int main()
{
    int array[]={6,5,10,7,4,1};
    char array1[]={'a','k','l','s'}

    reverseIt(array1,4);
    printArray(array1,4);

    return 0;
}   