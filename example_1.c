
#include <stdlib.h>
#include <stdint.h>


int main()
{   

    int num1=5, num2=7;
    int *ptrA,*ptrB;

    printf("num1 = %d   num2=%d\n",num1,num2);              //num1=5 num2=7

    ptrA=&num1;
    ptrB=&num2;

    printf("num1 = %d   num2=%d\n",num1,num2);              //num1=5 num2=7

    *ptrA=*ptrA+1;                                          // *ptrA=6
    *ptrB=*ptrB+3;                                          // *ptrB=10

    printf("num1 = %d   num2=%d\n",num1,num2);              //num1=6 num2=10


    ptrA=ptrB;  //ptrA->num2 ,ptrB->num2
    ptrB=ptrA;  //ptrB->num2

    printf("num1 = %d   num2=%d\n",num1,num2);              //num1=6 num2=10 // 
    printf("*ptrA = %d  *ptrB=%d\n",*ptrA,*ptrB);           //ptrA=10 ptrB=10


    num1=*ptrB;                                             //num1=10
    num2=num1-3;                                            //num2=7

    printf("num1 = %d   num2=%d\n",num1,num2);              //num1=10    num2=7



    return 0;
}