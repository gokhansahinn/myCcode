#include <stdio.h>
#include <stdint.h>

#define SIZE 7

int sum=0,sizeReal=0;

//Exercise:
// Write a recursive function that:
//                  -receives an array and its size.
//                  =return average value of the array.

//For example: Given array: 1,4,3 -- size=3
//Function should return 2.6666(8/3)
//This is my solution
float averageArrayRecusive(int *array,int size)
{
    
    sum += array[0];
    sizeReal++;
    // Base Condition (Stopping Condition)
    if(size==1)
        return (float)sum/sizeReal;
    //Smaller Sub Problems.... Recursive Calls. 
    averageArrayRecusive(array+1,size-1);

}
//This is an other solution.
double findArrayAverage(int *array,int size)
{
    double avgSoFar;
    if(size == 1)
        return array[0];
    avgSoFar= findArrayAverage(array+1,size-1);
    return (avgSoFar*(size-1)+array[0])/size;
}
int main()
{
    int array[]={1,4,3,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    //float result= averageArrayRecusive(array,size);
    double result= findArrayAverage(array,size);
    printf("Average of the array = %lf\n",result);
    return 0;
}