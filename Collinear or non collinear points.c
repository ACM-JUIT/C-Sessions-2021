#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("\n Enter the value of x and y coordinates of first point:");
    scanf("%d %d",&x1,&y1);
    printf(" Enter the value of x and y coordinates of second point:");
    scanf("%d %d",&x2,&y2);
    printf(" Enter the value of x and y coordinates of third point:");
    scanf("%d %d",&x3,&y3);
    printf("\n The three points entered by user : (%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
    ((y2-y1)/(x2-x1) ==(y3-y2)/(x3-x2) ) ? printf("\n \n All 3 points are collinear."): printf("\n \n All 3 points are non collinear.");

    return 0;
}
