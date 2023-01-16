#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 7
//  Develop a recursive function that receives an array of integers "arr" and its size.
//  The function should return 1 if the array is a Palindrome, otherwise 0.
//  
//  For example:        
//                  "121" ---->1
//                  "12342" ---->0
//                  "987789" ---->1
//
// this is my solution.
int isPalindromeArray(int * array,int size)
{
    int i=0;
    int j=size-1;
    while(i<j)
    {
        if(array[i] != array[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}
// Other solution 
int isPalindromeArrayRecursive(int *array,int size)
{
    if(size<=1) // an array with 0 or 1 elements(considered to be a palindrome)
        return 1;
    if(array[0] != array[size -1])
        return 0;
    else
        return isPalindromeArrayRecursive(array+1,size-2);  // this return subarray
                                                            // for example array {1,2,4,4,2,1}
                                                            //             array {2,4,4,2}
                                                            //             array {4,4}
                                                            //             size= 0 and return 1;

}

int main()
{
    int array[]={1,2,3,4,3,2,1};
    int size=sizeof(array)/sizeof(array[0]);
//    int result=isPalindromeArray(array,size);
    int result=isPalindromeArrayRecursive(array,size);
    printf("return %d\n",result);


}