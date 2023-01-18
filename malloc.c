#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int *a;
    double *b;
    int arraySize;
    printf("enter of size of array: "); 
    scanf("%d",&arraySize);
    a = (int*)malloc(sizeof(int)*arraySize);//malloc function returns address of first byte address and it is global and //you can casting (int* ,char*,float*)
    if(a != NULL)
        printf("Memory Alloction is succeded for a array!\n");
    else
        printf("Memory Alloction is not succeded for a array!\n");
    printf("adress a[0] = %p\n",a);         
    printf("adress a[1] = %p\n",a+1);
    printf("adress a[2] = %p\n",a+2);
    printf("adress a[3] = %p\n",a+3);
    printf("adress a[4] = %p\n",a+4);
    printf("\n\n");
    b=(double*)malloc(sizeof(double)*arraySize);
    if(a != NULL)
        printf("Memory Alloction is succeded for a array!\n");
    else
        printf("Memory Alloction is not succeded for a array!\n");
    printf("adress a[0] = %p\n",b);         
    printf("adress b[1] = %p\n",b+1);
    printf("adress b[2] = %p\n",b+2);
    printf("adress b[3] = %p\n",b+3);
    printf("adress b[4] = %p\n",b+4);
    return 0;
}