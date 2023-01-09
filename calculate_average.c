#include <stdio.h>
#include <stdint.h>
#include <string.h>


#define SIZE 4

//Exercise: Write a function that should receive an array and its size.
//          The function should calculate and return the Average Value of the Array.


int sumArray(int * pArray, int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=pArray[i];//*(pArray+i) can write instead of pArray[i]
    }
    return sum;
}
double averageArray(int * pArray, int size)
{
    return (double)sumArray(pArray,size)/size;
}


int main()
{

    int grades[SIZE] = {10,5,25,15};
    printf("Average of grades = %lf",averageArray(grades,sizeof(grades)/sizeof(grades[0])));
    return 0;
}