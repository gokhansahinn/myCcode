#include <stdio.h>
#include <stdint.h>


int main()
{
    int num1 = 0,num2=0;
    printf("Enter num1: ");
    scanf("%d\n",&num1);
    printf("Enter num2: ");
    scanf("%d\n",&num2);
    printf("BEFORE SWAP FUNCTION num1 = %d  num2 = %d\n",num1,num2);
    swapFunc(&num1,&num2);
    printf("AFTER SWAP FUNCTION num1 = %d  num2 = %d\n",num1,num2);

    return 0;
}

void swapFunc(int *pNum1, int *pNum2)
{
    int temp;
    temp = *pNum1;
    *pNum1 = *pNum2;
    *pNum2=temp;
}