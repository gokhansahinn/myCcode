#include <stdio.h>
#include <stdint.h>

#define SIZE 7

//Exercise:
// Devolep 2 recursive functions.
// Both should receive an array and its size.

//Func. A--> Should print all array elements.
//           from the leftmost value to
//           rightmost value.

//Func. B--> Should print all array elements.
//           from the righmost value to
//           leftmost value.

//For example: Given array: 1,3,2,4
//Func A should print: 1 3 2 4
//Func B should print: 4 2 3 1
void printArrayLefttoRight(int *array,int size)
{
    if(size>0)
        printf("%d  ",array[0]);
        printArrayLefttoRight(array+1,size-1);
}
void printArrayRighttoLeft(int *array,int size)
{
    if(size>0)
        printf("%d  ",array[size-1]);
        printArrayRighttoLeft(array+size-1,size-1);
}
int main()
{
    int array[]={1,3,2,4};
    int size=sizeof(array)/sizeof(array[0]);
    printArrayLefttoRight(array,size);
    printArrayRighttoLeft(array,size);

    return 0;
}