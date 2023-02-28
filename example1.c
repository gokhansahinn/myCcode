#include <stdio.h>
#include <stdint.h>



void ageFunc(int age)
{
    printf("Your age is %d\n",age);
}
int main()
{
    int age;
    void (*ptrFunc)(int);
    ptrFunc = ageFunc;
    printf("Enter your age: ");
    scanf("%d",&age);
    ptrFunc(age);
    return 0;
}