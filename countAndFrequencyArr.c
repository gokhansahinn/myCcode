#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define SIZE_1 5
#define SIZE_2 6

//Exercise: Write a function that receives an array.
//          The function should count and print the
//          Frequency of each of the Array's Elements.
// 
void printValueFreqeuncy(int *array,int size)
{
    int i,j;
    int leftFlag;
    int countValue;

    for(i=0;i<size;i++)
    {
        // left part.. check
        countValue=1;
        leftFlag=0;
        for(j=0;j<i;j++)
        {
            if(array[j]==array[i])
            {
                leftFlag=1;
                break ;
            }
        }
        if(leftFlag ==1)
            continue;
        // Right part .. check
        for(j=i+1;j<size;j++)
        {
            if( array[i] == array[j])
            {
                countValue++;
            }
        }
        //print actual frequency
        //Value at array[i] appears countValue times.
        printf("value at array[%d]=%d appears %d times\n",i,array[i],countValue);
    }
}
int main()
{
    int array[]={9,9,9,9,9,9,9,9,9};

    printValueFreqeuncy(array,9);

    return 0;
}