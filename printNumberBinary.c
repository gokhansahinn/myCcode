#include <stdio.h>
#include <stdint.h>

#define SIZE 7

int sum=0,sizeReal=0;

//Exercise:
//Recursion Practive
//Develop a recursive function that receives an integer value "n".
//The function should print the value of "n" in Binary-Representation(base2). 
//For example:
//          "n"=4 --->100
//          "n"=6 --->110
//          "n"=12 --->1100
void printNumberBinary(int value)
{

    if(value<=1)
    {   
        printf("%d ",value);
    }
    else
    {
        printNumberBinary(value/2);
        printf("%d ",value%2);

    }

}


int main()
{
    int number=4;
    printNumberBinary(number);
    return 0;
}