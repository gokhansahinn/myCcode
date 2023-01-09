#include <stdio.h>
#include <stdlib.h>


// int findMaxValue(int num1,int num2);
// int findMinValue(int num1,int num2);
void findMinMax(int num1,int num2,int *pmax, int *pmin);
int main()
{
    int num1=5;
    int num2=2;
    int max,min;
    findMinMax(num1,num2,&max,&min);
    printf("Max Value = %d \n Min Value = %d",max,min);
    return 0;
}


// int findMaxValue(int num1,int num2)
// {
//     if (num1>num2) 
//         return num1;
//     else
//         return num2;

// }
// int findMinValue(int num1,int num2)
// {
//     if (num1<num2)
//         return num1;
//     else
//         return num2;
// }

// WE CAN SIMPLY THIS FUNCTION

void findMinMax(int num1,int num2,int *pmax,int *pmin)
{  
    
    if(num1>num2)
    {
        *pmax=num1;
        *pmin=num2;
    }
    else
    {
        *pmax=num2;
        *pmin=num1;
    }

}