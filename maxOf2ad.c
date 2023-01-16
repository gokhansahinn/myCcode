#include <stdio.h>
#include <stdint.h>

#define SIZE 7

/*Global variable*/
int maxValue=0;
//Exercise - Recursive & arrays//
// Develop a recursive function that receives an array of integers and its size.
//The Function should calculate and return the maximum sum of two adjacents element
//For example:
//          array = 1,2,4,3,1 size=5 ---->7
//          array = 9,2,4,5,4 size=5 ---->11
/*this my solution*/
int findMaxValueAdjacent2(int *array,int size)
{
    if(size ==1)
        return maxValue;
    if(array[0]+array[1]>maxValue)
        maxValue=array[0]+array[1];
    return findMaxValueAdjacent2(array+1,size-1);
}
int findMaxValueAdja2(int *array,int size)
{
    int currentMax;
    int MaxSoFar;
    if(size ==2)
        return array[0]+array[1];
    currentMax=array[0]+array[1];
    MaxSoFar=findMaxValueAdja2(array+1,size-1);
    if(MaxSoFar > currentMax)
        return MaxSoFar;
    else 
        return currentMax;
}
int main()
{
    //int array[]={9,2,4,5,4};
    int array[]={1,4,5,3,1};
    int size = sizeof(array)/sizeof(array[0]);
    //int maxValue1= findMaxValueAdjacent2(array,size);
    int maxValue1 = findMaxValueAdja2(array,size);
    printf("size = %d ----> maxValue = %d\n",size,maxValue1);
    return 0;
}