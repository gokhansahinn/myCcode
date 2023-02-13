#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char str[] = "GOKHANSAHIN";
    int my2DMatrix[2][3]= {{1,2,3},{4,5,6}};
    char *ptrchar;
    int *ptr;
    ptrchar  =str;
    printf("adress of first element of str = %p\n",ptrchar);
    printf("value of first element of str = %c\n",*ptrchar);
    ptrchar = ptrchar +1;
    printf("adress of second element on str = %p\n",ptrchar);
    printf("value of second element of str = %c\n\n",*ptrchar);
    ptr=my2DMatrix;
    for(int i = 0; i <2 ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            printf("adress of my2DMatrix[%d][%d] = %p\n",i,j,ptr);
            printf("value of my2DMatrix[%d][%d]  = %d\n",i,j,*ptr);
            ptr = ptr + 1;
        }
    }
    return 0;
}