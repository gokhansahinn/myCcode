#include <stdio.h>


//Related to Data Aligment
//Code Example #1//

typedef struct
{
    char x;     //1 byte
    short y;    //2 byte
    int z;      //4 byte
}Point;         // value that we expected is 7 byte in memory 
typedef struct
{
    short k;    //2 byte
    int a;      //4 byte
}Point2;        // value that we expected is 6 byte in memory. but the architecture(32-bit) of memory aligne the struct variable naturally. 
                 
void main()
{
    Point P1;
    Point2 p2;
    __uint8_t totalSizeStructPoint1 = sizeof(Point);
    printf("Sizeof Point2: %d\n",totalSizeStructPoint1);
    printf("&x : %p\n",&P1.x);
    printf("&y : %p\n",&P1.y);
    printf("&z : %p\n",&P1.z);
    __uint8_t totalSizeStructPoint2 = sizeof(Point2);
    printf("Sizeof Point2: %d\n",totalSizeStructPoint2);
    printf("&k : %p\n",&p2.k);
    printf("&a : %p\n",&p2.a);

}