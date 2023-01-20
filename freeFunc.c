#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define ARRAY_SIZE 5
int main()
{
    //Common errors with using "free" function
    //1.
    // int a[10];
    // free(a);
    //2.
    // int *a;
    // free(a);
    // 3.
    // int *a;
    // a=(int*)malloc(sizeof(int)*5);
    // free(a);
    // free(a);
    //4.
    // int *a;
    // a=(int*)malloc(sizeof(int)*5);
    // free(a+1);
    


    return 0;
}