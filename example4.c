#include <stdio.h>
#include <stdint.h>

typedef struct
{
    char x;
    double y;
    char z;
}Point;

typedef struct
{
    char x;
    char z;
    double y;
}Point1;
typedef struct
{
    char t;
    char z;
    int x;
    double y;

}Point2;

void main()
{
    uint8_t sizeofPoint = sizeof(Point);
    printf("Size of Point = %d\n",sizeofPoint);
    uint8_t sizeofPoint1 = sizeof(Point1);
    printf("Size of Point1 = %d\n",sizeofPoint1);
    uint8_t sizeofPoint2 = sizeof(Point2);
    printf("Size of Point2 = %d\n",sizeofPoint2);
    Point p;
    Point1 p1;
    Point2 p2;


    printf("Point Stuctruc address\n");
    printf("&p.x = %p\n",&p.x);
    printf("&p.y = %p\n",&p.y);
    printf("&p.z = %p\n",&p.z);

    printf("Point1 Stuctruc address\n");
    printf("&p1.x = %p\n",&p1.x);
    printf("&p1.y = %p\n",&p1.y);
    printf("&p1.z = %p\n",&p1.z);

    printf("Point2 Stuctruc address\n");
    printf("&p2.x = %p\n",&p2.x);
    printf("&p2.y = %p\n",&p2.y);
    printf("&p2.z = %p\n",&p2.z);
    printf("&p2.t = %p\n",&p2.t);

}