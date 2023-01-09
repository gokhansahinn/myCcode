#include <stdio.h>
#include <stdint.h>
#include <string.h>


#define SIZE 4
#define EXIST 1
#define NOTEXIST !EXIST


// A function to search if an element is in a given array

int findIfKeyArray(int *pgrades,int key,int size)
{
    for(int i=0;i<size;i++)
    {
        if(key == *(pgrades+i))
        {
            return EXIST;
        }
    }
    return NOTEXIST;
}

int main()
{
    int grades[SIZE]={80,85,72,90};
    int result,key;
    printf("enter number that you want: ");
    scanf("%d",&key);
    result=findIfKeyArray(grades,key,sizeof(grades)/sizeof(grades[0]));
    if(result==EXIST)
    {
        printf("Your key is inside array\n");
    }
    else
    { 
        printf("Your key is not inside array\n");
    }
    return 0;
}