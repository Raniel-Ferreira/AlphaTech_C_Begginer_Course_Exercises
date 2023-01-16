// Write a program that receives a coordinate point in the XY system.
//The prgram should print in which quadrant the point is at.

#include <stdio.h>

int main()
{
    int x,y;

    printf("Please inform the value of X: ");
    scanf("%d", &x);

    printf("Please inform the value of Y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
        printf("You're in the 1st Quadrant\n");
    else if (x > 0 && y < 0)
        printf("You're in the 2nd Quadrant\n");
    else if (x < 0 && y > 0)
        printf("You're in the 3rd Quadrant\n");
    else if (x < 0 && y < 0)
        printf("You're in the 4th Quadrant\n");
    else
        printf("You're location is (0,0)\n");
        
}