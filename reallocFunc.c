#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int *grades = NULL;
    int *temp = NULL;
    int totalGrades;
    printf("Enter total Grades Number: ");
    scanf("%d",&totalGrades);
    grades = (int* )malloc(sizeof(int)*totalGrades);
    if(grades != NULL)
    {
        printf("Allocation is succesed\n");
    }
    else
    {
        printf("Allocation is failed");
        exit(1);
    }
    for(int i=0;i<totalGrades;i++)
    {
        printf("Enter %d .grades: ",i);
        scanf("%d",&grades[i]);
    }
    //code.....
    totalGrades = totalGrades +2;
    temp = (int *)realloc(grades,totalGrades*sizeof(int));
    if(temp != NULL)
    {
        grades = temp;
        printf("Re alloceted is succesed\n");
    }
    else
    {
        printf("Realloce is failed\n");
    }
    grades[totalGrades -1]=100;
    grades[totalGrades -2]=90;

    //code ... 

    // ı dont need extand part 

    totalGrades = totalGrades -3;
    temp = (int *)realloc(totalGrades, sizeof(int));
    if(temp !=NULL)
        grades = temp;
    //Code ... 

    free(grades);
   
    return 0;
}