//Write a program that calculates how long will a car take to drive from city A to city B

#include <stdio.h>

int main()
{
    float speedInMinutes, remainingMinutes;
    int hours, distance, speed;

    printf("What's you car speed?\n");
    scanf("%d", &speed);
    printf("What's the distance of the city you want to go?\n");
    scanf("%d", &distance);

    hours = (int)(distance / speed);
    speedInMinutes = speed / 60.0;
    remainingMinutes = (distance % speed) / speedInMinutes;

    printf("Then the time it will take to get there will be: %d hours and %.1f minutes ", hours, remainingMinutes );

}