#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

/*2D Matrix*/
// An array of Pointers 
int main()
{
    int * arr[5];
    for(int i  = 0 ; i < 5 ;i++)
    {
        arr[i] = (int *)calloc(3,sizeof(int));
    }
    arr[1][1]=30;
    scanf("%d",&arr[4][0]);
    //We can print a elements  in 2D array
    printf("arr[4][0]= %d\n",arr[4][0]);
    return 0;
}