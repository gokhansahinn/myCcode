#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
//Static Array of Structs

typedef struct 
{
    int x;
    int y;
    int *ptr;
}Point;

int main()
{
    //Creating a "Static Array of Point"
    Point pointsArray[5];
    int i;

    //Reading Input to first point element in the array
    // printf("Enter a first point 'x' coordinate: ");
    // scanf("%d",&pointsArray[0].x);
    // printf("Enter a first point 'y' coordinate: ");
    // scanf("%d",&pointsArray[0].y);
    //Iterating over all of the Point Array( and getting input into each of them)
    for(i = 0 ; i<5 ; i++)
    {
        printf("Enter a point #%d 'x' coordinate: ",i+1);
        scanf("%d",&pointsArray[i].x);
        printf("Enter a point #%d 'y' coordinate: ",i+1);
        scanf("%d",&pointsArray[i].y);
    }
    printf("\n\n");
    //Accessing and printing all the value of each of the "static array of Points"
    for(i = 0 ; i<5 ; i++)
    {
        printf("Point #%d  (%d,%d)\n",i+1,pointsArray[i].x,pointsArray[i].y);
    }

    return 0;
}