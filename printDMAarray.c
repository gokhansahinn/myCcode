#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define ARRAY_SIZE 5
void printArray(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("grades[%d] = %d \n",i,arr[i]);
    }
    printf("Done!\n");
}
// int* inputDataArray(int size)
// {
//     int * arr;
//     for(int i=0;i<size;i++)
//     {
//         printf("Enter grades for %d students: ",i);
//         scanf("%d",&arr[i]);
//     }
//     return arr;
// }
int main()
{
    int *grades;
    int sizeArray;
    printf("Enter size of Array: ");
    scanf("%d",&sizeArray);
    grades=(int *)malloc(sizeof(int)*sizeArray);
    //input array döküman:
    for(int i=0;i<sizeArray;i++)
    {
        printf("Enter grades for %d students: ",i);
        scanf("%d",&grades[i]);
    }
    printf("\n");
    printArray(grades,sizeArray); 
    
    return 0;
}