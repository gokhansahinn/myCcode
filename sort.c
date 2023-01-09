#include <stdio.h>
#include <stdlib.h>


typedef enum
{
    OK=1,
    NOT_OK=!OK,
}status;
/*Write a Function Checks if the array is "Really Sorted", "Sorted" , "Not Sorted" 
  The function should RETURN 1 and PASS 1 by Reference if the array is "Really Sorted".
  The function should RETURN 1 and PASS 0 by Reference if the array is "Sorted".
  The function should RETURN 0 and PASS 0 by Reference if the array is "Not Sorted".

  Example1: [1,2,5,7,10] ---> Really Sorted. R-1 P-1 // for any pair Left element < Right Element
  Example2: [1,2,2,5,10] ---> Sorted. R-1 P-0 // for any pair Left element <= Right Element
  Example3: [1,2,5,3,10] ---> Not Sorted. R-0 P-0 
*/


int sortedArray(int * pArray, int size,int *pass)
{
    status tempOK=NOT_OK;
    for(int i=0; i<size;i++)
    {
        if(pArray[i]<=pArray[i+1])
        {
            tempOK=OK;
            *pass=OK;
            if(pArray[i]==pArray[i+1])
            {
                *pass=NOT_OK;
                return 1; 
            }
        }
        else
        {
            *pass=0;
            return 0; 
        }
    }
    if (tempOK == OK && *pass == OK)
    {
        *pass=1;
        return 1; 
    }

}

// iterative solution
int checkIsSorted(int *arr,int size, int *isReallySorted)
{
    *isReallySorted=1;
    for (int i=1;i<size;i++)
    {
        if(arr[i] <=arr[i-1]);  // Right element is less and equal than left element
        {
            *isReallySorted=0;  // this is not really sorted but it can be sorted
        }
        if(arr[i] < arr[i-1])   //   Right element is less than left element
            return 0;           //   isnotsorted          
    }
    return 1;
}

//Recursive Approach-solution---> Kendi kendini çağıran fonksiyon.
int checkIsSortedRecursive(int *arr,int size, int *isReallySorted)
{
    int result;
    if(size == 1)
    {
        *isReallySorted=1;
        return 1;
    }
    result=checkIsSortedRecursive(arr,size-1,isReallySorted);
    if(result !=0 && arr[size-1] == arr[size-2])
    {
        *isReallySorted=0;
    }
    if(result !=0 && arr[size-1] < arr [size-2])
    {
        *isReallySorted=0;
        return 0;
    }
    return result;
}
int main()
{
    int array1[5]={1,2,5,7,10};
    int array2[5]={1,2,2,5,10};
    int array3[5]={1,2,5,3,10};
    int pass,result;

    // sortedArray(array1,(sizeof(array1)/sizeof(array1[0])),&pass);
    //sortedArray(array2,(sizeof(array2)/sizeof(array2[0])),&pass);
    // sortedArray(array3,(sizeof(array3)/sizeof(array3[0])),&pass);
    
    // printf("return %d and pass =%d for array1\n",sortedArray(array1,(sizeof(array1)/sizeof(array1[0])),&pass),pass);
    //printf("return %d and pass =%d for array2\n",sortedArray(array2,(sizeof(array2)/sizeof(array2[0])),&pass),pass);
    //printf("return %d and pass =%d for array3\n",sortedArray(array3,(sizeof(array3)/sizeof(array3[0])),&pass),pass);

    // result=checkIsSorted(array1,(sizeof(array1)/sizeof(array1[0])),&pass);
    
    
    //result=checkIsSortedRecursive(array1,(sizeof(array1)/sizeof(array1[0])),&pass);
    result=checkIsSortedRecursive(array2,(sizeof(array1)/sizeof(array1[0])),&pass);
    //result=checkIsSortedRecursive(array3,(sizeof(array1)/sizeof(array1[0])),&pass);



    printf("return %d and pass =%d for array1\n",result,pass);

    return 0;
}