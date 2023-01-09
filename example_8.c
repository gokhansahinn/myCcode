#include <stdio.h>
#include <stdint.h>
#include <string.h>


#define SIZE 4

//Exercise: Write a function that should receive an array and its size.
//          The function should find and return the maximum value in the array.


int findMaxValue(int *pArray,int size)
{

    if(size <=0)
        return -1;

    int tempMax,max=0;
    tempMax=(*pArray);

    for(int i=1;i<size;i++)
    {
        if(tempMax > *(pArray+i))
        {
            max=tempMax;
        }
        else
        {
            max= *(pArray+i);
            tempMax=max;
        }
    }
return max;

}

int main()
{

    int grades[SIZE] = {10,5,25,15};
    int maxGrade;
    maxGrade=findMaxValue(grades,SIZE);
    printf("max grade =%d",maxGrade);
    return 0;
}