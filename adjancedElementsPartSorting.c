#include <stdio.h>
#include <stdint.h>

#define SIZE 7

int sum=0,sizeReal=0;

//Exercise:
// Write a recursive function that:
//                  -receives an array of floating point numbers(>0) and its size.
//                  -return 1 if:
//                      -for any two adjacent elements in the array
//                       the "integer parts" are sorted in the ascending order,
//                       and the "fractional parts" are sorted in descending order.
//                  -returns "0", otherwise.

//For example #1:
//Given array: 1.4,3.25,4.5
//The Function should return 0

//For example #2:
//Given array: 1.4,3.25,4.2
//The Function should return 1

int isSpecialFloatingSorted(double *array,int size)
{
    int leftElementInteger,rightElementInteger;
    double leftElementFractional,rightElementFractional;
    if(size ==1 ) // we assume this array sorted.
        return 1;
    leftElementInteger = (int)array[0];
    rightElementInteger = (int)array[1];
    leftElementFractional  =array[0]-(double)leftElementInteger;
    rightElementFractional  =array[1]-(double)rightElementInteger;
    if((leftElementInteger > rightElementInteger) || (leftElementFractional<rightElementFractional))
        return 0;
    return isSpecialFloatingSorted(array+1,size-1);

}
/*Solution 2*/
int isSpecialFloatingSorted2(double *array,int size)
{
    if(size ==1 ) // we assume this array sorted.
        return 1;
    if(((int)array[0] > (int)array[1]) || (array[0]-(double)(array[0])<array[1]-(double)(array[1])))
        return 0;
    return isSpecialFloatingSorted(array+1,size-1);
}

int main()
{
    double array[]={1.4,3.25,4.5};
    //double array[]={1.4,3.25,4.2};
    int size=sizeof(array)/sizeof(array[0]);
    //int result=isSpecialFloatingSorted(array,size);
    int result=isSpecialFloatingSorted2(array,size);
    printf("return %d\n",result); 

    return 0;
}