#include <stdio.h>
#include <stdint.h>
#include <string.h>


#define SIZE 6

void findMinMaxGrade(int *pArray,int *min,int *max,int size)
{
    *max=pArray[0];
    *min=pArray[0];
    for(int i=1;i<size;i++)
    {
        if(pArray[i]>*max)
        {
            *max=pArray[i];
            printf("%d\n",*max);
        }
        if(pArray[i]<*min)
        {
            *min=pArray[i];
            printf("%d\n",*min);
        }
    }
}
int main()
{

    int grades[SIZE]={80,90,100,60,73,44};
    int min=0,max=0;
    findMinMaxGrade(grades,&min,&max,sizeof(grades)/sizeof(grades[0]));

    printf("AFTER findMinandMax function min = %d max = %d\n",min,max);


    return 0;
}   