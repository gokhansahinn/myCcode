#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
//Static Array of Structs

typedef struct 
{
    int x;
    int y;
    int z;
}Point;

int main()
{
    
    Point* pointArray;
    int totalPoint;

    printf("Enter point value: ");
    scanf("%d",&totalPoint);

    printf("size of Point Strucy: %ld\n", sizeof(Point));
    //Creating a "Dynamically Allocated Array of struct"
    //malloc representation
    //pointArray= (Point *)malloc(sizeof(Point)*totalPoint);
    //calloc representation
    pointArray = calloc(totalPoint,sizeof(Point));
    //Iterating over all of the Point Array( and getting input into each of them)
    for(int i = 0 ; i<5 ; i++)
    {
        printf("Enter a point #%d 'x' coordinate: ",i+1);
        scanf("%d",&pointArray[i].x);
        printf("Enter a point #%d 'y' coordinate: ",i+1);
        scanf("%d",&pointArray[i].y);
    }
    printf("\n\n");
    //Accessing and printing all the value of each of the "static array of Points"
    for(int i = 0 ; i<5 ; i++)
    {
        printf("Point #%d  (%d,%d)\n",i+1,pointArray[i].x,pointArray[i].y);
    }

    return 0;
}