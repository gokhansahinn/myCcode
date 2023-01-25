#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

void* insertElementInArray(void *sourceArray,unsigned sourceSize,void *value,unsigned valueSize,unsigned index)
{
    void * newArray =malloc(sourceSize+valueSize);
    memcpy(newArray,sourceArray,index);
    memcpy((char *)newArray+index,value,valueSize);
    memcpy((char *)newArray+index+valueSize,(char *)sourceArray+index,sourceSize-index);
    return newArray;
}
void printArr(int* arr, int size)
{
	int i;
	for(i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n\n");
}
void takeGrades(int * array ,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("Enter %d. grades: ",i);
        scanf("%d",&array[i]);
    }
}
int main()
{
    int * grades = (int *)malloc(sizeof(int)*3);
    int grade;
    int *updateArray=NULL;
    takeGrades(grades,3);
    printf("Enter grade that you want to add: ");
    scanf("%d",&grade);
    updateArray=(int *)insertElementInArray(grades,3*sizeof(int),&grade,sizeof(grade),2*sizeof(int));
    printf("This is a array before insert:\n");
    printArr(grades,3);
    printf("This is a array after insert:\n");
    printArr(updateArray,4);
    return 0;
}