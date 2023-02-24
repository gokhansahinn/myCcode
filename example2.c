#include <stdio.h>
#include <stdint.h>
// this example emphasizes that a struct is going to be aligned to the Largest type Aligment Requirement
// ** And that's to make sure that this type fits exactly where it should!**//


typedef struct
{
    char x;     //1 byte
    double y;    //8 byte
    int z;      //4 byte
}Point;         
                 
void main()
{
    uint8_t totalSizeStrucPoint = sizeof(Point);
    printf ("size of Point Struct: %d\n",totalSizeStrucPoint);
    Point p1;
    p1.x = 0xFF;
    printf("&p1.x: %p\n",&p1.x);
    // Note: The info in "y" is not going to be that readable since it's stored in the "double" type.
    p1.y=0x0123456789ABCDEF;
    printf("&p1.y: %p\n",&p1.y);
    p1.z=0x01234567;
    printf("&p1.z: %p\n",&p1.z);
}