#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 7
//  Exercise- Recursion & Array 
//  Develop a recursive function that receives an array and its size.
//              -1, if every two adjacent elements have the opposite sign.
//              -0, otherwise (at least one pair of adjacent elements with the same sign).
//  
//  For Example:
//          arr = -1,2,-4 size = 3--->1
//          arr = 1,-2,4,5,-3   size = 5 --->0
int exchangingSignArrayRecursive(int * array,int size)
{
    if(size==1) //Consider array is two adjacent elements have opposite sign.
        return 1;
    if(array[0]<0 && array[1]<0 || array[0]>0 && array[1]>0)            /*I can write this condition like this*/
        return 0;                                                       /*If I multiple 2 Positive number result positive, also multiple 2 negative number result positive*/
                                                                        /*array[0]*array[1]>0 its meaning there are two same sign numbers.*/
    else                                                                
        return exchangingSignArrayRecursive(array+1,size-1);
}
int exchangingSignArrayRecursive2(int * array,int size)
{
    if(size==1) //Consider array is two adjacent elements have opposite sign.
        return 1;
    if(array[size-1]*array[size-2]>0)            
        return 0;
    else                                                                
        return exchangingSignArrayRecursive(array,size-1);
}

int main()
{
    int array[]={-1,2,-4,5,-6,1};
    int size=sizeof(array)/sizeof(array[0]);
    //int result=exchangingSignArrayRecursive(array,size);
    int result=exchangingSignArrayRecursive2(array,size);
    printf("size = %d  return %d\n",size,result);

    return 0;
}