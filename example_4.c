#include <stdio.h>
#include <stdint.h>


int main()
{
    int a=10;
    int *ptr = &a;
    void *ptr1=&a;
    printf("Address of a = %p\n",&a);
    printf("Address of ptr = %p\n",&ptr);
    printf("Kept Address of ptr = %p\n",ptr);
    printf("Value Kept Address of ptr = %d\n",*ptr);
    printf("Void Pointer Kept Address of ptr1 = %p\n",ptr1);
    printf("Void Pointer to int pointer and derefences ptr1 = %d\n",*((int *)ptr1));// cascating to int pointer and after deference 
    printf("Void Pointer to float pointer and derefences ptr1 = %lf\n",*(double *)ptr1);// cascating to float pointer and after deference
    // printf("Void Pointer Kept Address of ptr1 = %d\n",*ptr1);



    return 0;
}