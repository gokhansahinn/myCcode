#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
// write a function that receives a string - "Alpha"
//Return a concatenated string - "AlphaAlpha"
int main()
{
    /*There are two different represent for char array*/
    char charArray[] = {'H','E','L','L','O','\0'}; //Option1

    char string[] ="HELLO"; //Option2

    char * str = "HELLO"; //Option3 ----> Read Only Memory
                        /* But I create a char pointer and I assign a string. String allocate different address. Char pointer also allocate a different address.
                        When we assign a string "HELLO" to char pointer, the pointer keep its address. That's why we can change the string without any iteration.
                        When you create address for "HELLO", str keep this address. It read only memory. (READ ONLY MEMORY).
                        When you create address for "Good-Bye", str keep this address. It read only memory. (READ ONLY MEMORY). You can not change HELLO.        
                        */
    printf("str before = %s\n",str);
    printf("string before = %s\n",string);
    str[0]='G';         // would NOT WORK. This is read only memory.
    string[0] = 'G';    // WORKS
    str = "Good-bye"; 
    //string = "Good-bye"; // we can not assign for this array because this array.
    printf("str after = %s\n",str);
    printf("string after = %s\n",string);
    // char *tempPtr ;
    // tempPtr = charArray;

    // tempPtr[0]='S';

    // printf("%s",charArray);
    // printf("\n");


    return 0;
}