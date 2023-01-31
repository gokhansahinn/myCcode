#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
// Strlen
// Function that receives a string
// Finds ours and return the lenght of the string
//#define STRLEN_FUNC
//#define STRCAT_FUNC
//#define STRCPY_FUNC
#define STRCMP_FUNC

int ownStrlen(char *string)
{
    return strlen(string);
}
char *ownStrcat(char *destStr,char * sourceStr)
{
    char *concatStr;
    int lenghtDest , lenghtSource,i;
    lenghtDest = strlen(destStr);
    lenghtSource = strlen(sourceStr);

    concatStr =(char *)malloc((lenghtDest+lenghtSource)*sizeof(char));

    for(i=0 ; i<lenghtDest ;i++)
        concatStr[i]=destStr[i];
    for(i=0 ; i<lenghtSource; i++)
        concatStr[i+lenghtDest]=sourceStr[i];
    concatStr[lenghtDest+lenghtSource] = '\0';
    return concatStr;
}
char* ownStrcpy(char *destStr,char *sourceStr)
{
    char *tempPtr;
    int i;
    tempPtr = destStr;

    while(sourceStr[i] !='\0')
    {
        destStr[i]=sourceStr[i];
        i++;
    }
    destStr[i]='\0';
    return tempPtr;
}
/// @brief This function compare size  of two different string in array.
/// @param str1 One of the string that compare
/// @param str2 One of the string that compare
/// @return if lenght of str1 is bigger than lenght of str2 it return 1;
///         if lenght of str1 is smaller than lenght of str2 it return -1;
///         if lenght of str1 is equal lenght of str2 it return 0;
int ownStrcmp(char * str1, char *str2)
{
    int lenStr1,lenStr2;
    lenStr1 = strlen(str1);
    lenStr2 = strlen(str2);
    if(lenStr1 != lenStr2){
        if(lenStr1>lenStr2)
            return 1;
        else
            return -1;
    }
    else
    {
        return 0;
    }
}
int ownStrcmp2(char * str1, char *str2)
{
    int i , flag;
    while(flag ==0)
    {
        if(str1[i]<str2[i])
            return -1;
        else if(str1[i]>str2[i])
            return 1;
        if(str1[i] == '\0')
            break;
        i++;
    }
    return flag;
}
int main()
{
    #ifdef STRLEN_FUNC
    char string[] = "KALEM";
    char string2[] = {'K','A','L','E','M','\0'};
    printf("Lenght of the string = %d\n",ownStrlen(string));
    printf("Lenght of the string2 = %d\n",ownStrlen(string2));
    #endif
    #ifdef STRCAT_FUNC
    char *stickString;
    char str1[] = "Hello ";
    char str2[] = "World!";
    stickString = ownStrcat(str1,str2);
    printf("%s",stickString);
    #endif
    #ifdef STRCPY_FUNC
    char myNickName[] ="Calculator";
    char copyOfNicname[30];
    char* tempResult;
    tempResult = ownStrcpy(copyOfNicname,myNickName);
    printf("temp result is %s\n",tempResult);
    printf("Nickname copy is %s\n",copyOfNicname);
    #endif
    #ifdef STRCMP_FUNC 
    char str1[] = "kalem";
    char str2[] = "silgi";
    //int result = ownStrcmp(str1,str2);
    int result = ownStrcmp(str1,str2);
    printf("result = %d\n",result);
    #endif
    return 0;
}