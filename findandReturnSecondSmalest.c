#include <stdio.h>
#include <stdint.h>
#include <string.h>

//Exercise: Write a function that receives an array.
//          The function should find and return the
//          "second smallest" in the array.
int findSecondSmallestArray(int *array,int size)
{
    int min1=array[0];// the smallest value in the array
    int min2=array[0];// the second smallest value in the array

    for(int i=1;i<size;i++)
    {
        //find smallest value in the array
        if(array[i]<min1)
        {
            min2=min1;
            min1=array[i];
        }
        else if(array[i]<min2)
        {
            min2=array[i];
        }
    }
    return min2;
}
int main()
{  
    int array[]={13,6,7,4,9};
    int result=0;
    result=findSecondSmallestArray(array,5);
    printf("second smallest value=%d in the array\n",result);
    return 0;
}