// Write a program that calculates the distance between two points

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, distance;

    printf("Please type the value of x1: ");
    scanf("%f", &x1);
    printf("Please type the value of x2: ");
    scanf("%f", &x2);
    printf("Please type the value of y1: ");
    scanf("%f", &y1);
    printf("Please type the value of y2: ");
    scanf("%f", &y2);

    distance = sqrt ((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    printf("The distance between the points: A: (%.2f,%.2f) and B: (%.2f,%.2f) is %.2f\n", x1, x2, y1, y2, distance);

}