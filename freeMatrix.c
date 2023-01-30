#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>


void freeMatrix(int **a, int row)
{
    for(int i = 0 ; i<row ; i++)
    {
        free(a[i]);
    }
    free(a);
}
int main()
{

    return 0;
}