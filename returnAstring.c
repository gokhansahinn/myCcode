#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
// write a function that receives a string - "Alpha"
//Return a concatenated string - "AlphaAlpha"
/*SOLUTION-1*/
char *strConcatened(char * originalStr)
{
    char *newStr;
    int lenghtOriginalStr = strlen(originalStr);
    newStr = (char *)malloc(2*lenghtOriginalStr*sizeof(char)+1);
    memcpy(newStr,originalStr,lenghtOriginalStr*sizeof(char));
    memcpy(newStr+lenghtOriginalStr,originalStr,lenghtOriginalStr*sizeof(char));
    return newStr;
}
/*SOLUTION-2*/
char *strConcatened2(char *originalString)
{
    char * newString;
    int i;
    int lenghtString=strlen(originalString);
    newString = (char *)malloc(2*lenghtString*sizeof(char));
    for(i=0 ; i<lenghtString ; i++)
    {
        newString[i] = originalString[i];
        newString[i+lenghtString]=originalString[i];
    }
    newString[i+lenghtString]='\0';
    return newString;
}
int main()
{
    char string[]= "Gökhan";
    char* word;
//    word = strConcatened(string);
    word = strConcatened2(string);
    printf("%s\n",word);

    return 0;
}