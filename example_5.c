#include <stdio.h>
#include <stdint.h>
#include <string.h>

void genericSwapFunction(void * num1,void *num2,int size)
{
    //size -> specifies the number of bytes
    void * tempMemory = malloc(size); // gelen bytes kadar memory de yer açmakta.
    //printf("Address of tempMemory = %p\n",tempMemory);
    //Memory copy Func
    //memcpy(void *dest, const void * src, size_t num)
    memcpy(tempMemory,num1,size);
    memcpy(num1,num2,size);
    memcpy(num2,tempMemory,size);

    free(tempMemory);

}

int main()
{
    int num1=5,num2=2;
    double average1=90.5,average2=89.7;
    printf("BEFORE SWAP Average1 = %lf\nBEFORE SWAP Average2 = %lf\n",average1,average2);
    printf("BEFORE SWAP num1 = %d\nBEFORE SWAP num2 = %d\n",num1,num2);

    genericSwapFunction(&average1,&average2,sizeof(double));
    genericSwapFunction(&num1,&num2,sizeof(int));

    printf("AFTER SWAP Average1 = %lf\nAFTER SWAP Average2 = %lf\n",average1,average2);
    printf("AFTER SWAP num1 = %d\nAFTER SWAP num2 = %d\n",num1,num2);

    return 0;
}