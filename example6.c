#include <stdint.h>
#include <stdio.h>


typedef struct
{   
    double average; // 8 bytes
    char mark1;     // 1 bytes
    char mark2;     // 1 bytes
    short result;   // 2 bytes
    int value;      // 4 bytes
    double salary;  // 8 bytes 
}Test;
int main()
{
    uint8_t sizeofTest = sizeof(Test);
    Test t1;
    printf("size of test = %d\n",sizeofTest);
    printf("*****************************************\n");
    printf("&t1.average =   %p\n",&t1.average);
    printf("&t1.mark1 =     %p\n",&t1.mark1);
    printf("&t1.mark2 =     %p\n",&t1.mark2);
    printf("&t1.result =    %p\n",&t1.result);
    printf("&t1.value =     %p\n",&t1.value);
    printf("&t1.salary =    %p\n",&t1.salary);
    return 0;
}