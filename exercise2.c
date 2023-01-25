#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
//Given an array of integers [12,5,7,8,3,10,4,9 ]
//Create 2 dynamically allocated arrays
//First array will consist only of "Even values" [12,8,10,4]
//Second array will consist only of "Odd Values" [5,7,3,9]
//The function should simply print the values of both of arrays
//Step2- Return & Pass by ref

int * evenOrOddArray(int *array,int **myOddArray,int size,int *sizeEven,int *sizeOdd)/*I will keep address of array*/
{
    int i,j=0,k=0;
    int * evenArray;
    int * oddArray;
    int countEven=0,countOdd=0;
    for(i=0;i<size;i++)
    {
        if(array[i] %2 == 0)
            countEven++;
        else
            countOdd++;
    }
    *sizeEven =countEven;
    *sizeOdd = countOdd;
    evenArray= (int *)malloc(sizeof(int)*countEven);
    oddArray = (int *)malloc(sizeof(int)*countOdd);
    for(i=0;i<size;i++)
    {
        if(array[i] %2 ==0)
        {
            evenArray[j]=array[i];
            j++;
        }
        else
        {
            oddArray[k]=array[i];
            k++;
        }
    }
    *myOddArray=oddArray;
    return evenArray;
}
void printArray(int *array, int size)
{
    for(int i=0; i<size;i++)
    {
        printf("array[%d] = %d\n",i,array[i]);
    }
}
int main()
{
    int originalArray[]={12,5,7,8,3,10,4,9};
    int sizeOriginalArray=sizeof(originalArray)/sizeof(int);
    int sizeEvenArray=0,sizeOddArray=0;
    int *evenArray=NULL;
    int *oddArray=NULL;
    evenArray = evenOrOddArray(originalArray,&oddArray,sizeOriginalArray,&sizeEvenArray,&sizeOddArray);
    printf("Even array\n\n");
    printArray(evenArray,sizeEvenArray);
    printf("\n");
    printf("Odd array\n\n");
    printArray(oddArray,sizeOddArray);
    free(evenArray);
    free(oddArray);
    return 0;
}