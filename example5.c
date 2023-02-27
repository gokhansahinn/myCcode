#include <stdint.h>
#include <stdio.h>


typedef struct
{
	short val1;
	int val2;
	char val3;

}A;
typedef struct
{
	char val1;
	int val2;
	A val3;
}B;

void main()
{
    uint8_t sizeofA = sizeof(A);
    uint8_t sizeofB = sizeof(B);
    printf("sizeof A = %d\n",sizeofA);
    printf("sizeof B = %d\n",sizeofB);
    B b1;
    b1.val1  = 0xFF;
    b1.val2  = 0x01234567;
    b1.val3.val1 = 0xFFFF;
    b1.val3.val2 = 0xAACCEEFF;
    b1.val3.val3 = 0xFF;

    printf("&b1.val1 = %p\n",&b1.val1);
    printf("&b1.val2 = %p\n",&b1.val2);
    printf("&b1.val3.val1 = %p\n",&b1.val3.val1);
    printf("&b1.val3.val2 = %p\n",&b1.val3.val2);
    printf("&b1.val3.val3 = %p\n",&b1.val3.val3);

}
