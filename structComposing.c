#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
// Composing Struct inside Another Struct
typedef struct
{
    int x;
    int y;

}Point;
//This is one option.
typedef struct
{
    int x;
    int y;
    double radius;

}Circle;
//This is another option that we use another struct inside of this struct.
typedef struct
{
     Point center;
     double radius;
}Circle2;

void getCenterandRadiusofCircle(Circle2* circle)
{
    printf("Enter x axis of center of circle: ");
    scanf("%d",&circle->center.x);
    printf("Enter y axis of center of circle: ");
    scanf("%d",&circle->center.y);
    printf("Enter radius of circle: ");
    scanf("%lf",&circle->radius);
}
double calculatedAreaCircle(Circle2* circle)
{
    double radius = ((*circle).radius);
    return radius*radius*3.14;
}
int main()
{
    Circle2 circle1;
    double area;
    getCenterandRadiusofCircle(&circle1);
    area = calculatedAreaCircle(&circle1);
    printf("(%d,%d) center circle area is %.2lf\n",circle1.center.x,circle1.center.y,area);


    return 0;
}