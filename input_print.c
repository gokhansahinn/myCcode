#include <stdio.h>
#include <stdint.h>
#include <string.h>


#define SIZE 4
// inputArrayFunction 
void inputArrayFunction(int *pArray,int size)
{
    for(int i = 0; i<size;i++)
    {
        printf("Enter %d.coloums: ",i+1);
        scanf("%d",&pArray[i]);
    }
}
// DisplayArray Function
void displayArrayFunction(int *pArray,int size)
{
    for(int i=0; i<size;i++)
    {
        printf("Array[%d]= %d\n",i,pArray[i]);
    }
}


int main()
{

    int grades[SIZE];
    inputArrayFunction(grades,SIZE);
    displayArrayFunction(grades,SIZE);
    return 0;
}