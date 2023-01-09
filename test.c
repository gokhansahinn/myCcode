#include <stdio.h>


int main()
{   
    int a=0;
    printf("value of a=%d\n",a);
    int *p;
    p=&a;
    *p=5;  // dereference; 
    printf("value of a after pointer = %d\n",a);

    *p=7; // deference p* set 7 and 
    printf("Value of a after *p=7 = %d\n",a);

    return 0;
}