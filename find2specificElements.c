#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 7
//Exercise: Write a function that receives a Sorted(smallest--> largest) Array of elements.
//          The function also receives a "value".
//          The funtion should find if there is a sum of 2 elements in the array that equals to the received "value".
//          If there are such 2 elements, then return 1, and pass their indexes.
//          Else, return 0, and pass for both of them the value 0.
int find2SpecificElements(int *array,int * index1,int *index2,int value, int size)
{
        for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(value==(array[i]+array[j]))
            {
                *index1=i;
                *index2=j;
                return 1;
            }
        }
    }
    *index1=0;
    *index2=0;
    return 0;

}
int find2SpecificElementsOpt(int *array,int * index1,int *index2,int value, int size)
{
    int i= 0;
    int j=size-1;
    while(i<j)
    {
        if(array[i]+array[j]==value)
        {
            *index1=i;
            *index2=j;
            return 1;
        }
        if(array[i]+array[j]<value)
            i++;
        if(array[i]+array[j]>value)
            j--;
    }
    *index1=0;
    *index2=0;
    return 0;
}
int main()
{

    int array[]={1,3,4,7,9,10,13};
    int value=0,index1,index2;
    printf("enter a number that you want in a sorted array: ");
    scanf("%d",&value);
    //int result=find2SpecificElements(array,&index1,&index2,value,ARRAY_SIZE);
    int result=find2SpecificElementsOpt(array,&index1,&index2,value,ARRAY_SIZE);
    printf("return %d index1=%d index2=%d\n",result,index1,index2);
    return 0;
}