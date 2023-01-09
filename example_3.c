#include <stdio.h>
#include <stdlib.h>


int main()
{
    int grades[3]={80,90,100};
    int *ptrGrades;
    ptrGrades=&grades;
    printf("Grades address = %p\n",ptrGrades);
    printf("Grades[0] address = %p\n",ptrGrades);
    printf("Grades[1] address = %p\n",ptrGrades+1);
    printf("Grades[2] address = %p\n",ptrGrades+2);


    double grades1[3]={80,90,100};
    double *ptrGrades1;
    ptrGrades1=&grades1;
    printf("Grades for double address = %p\n",ptrGrades1);
    printf("Grades[0] for double address = %p\n",ptrGrades1);
    printf("Grades[1] for double address = %p\n",ptrGrades1+1);
    printf("Grades[2] for double address = %p\n",ptrGrades1+2);
    printf("\n\n\n");









    return 0;
}