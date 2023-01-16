// Write a program that converts seconds to minutes and to hours and vice versa

#include <stdio.h>

int main()
{
    int seconds,remainingSeconds, minutes, hours;

    printf("Please type the seconds:\n");
    scanf("%d", &seconds);
    printf("Now calculating...\n");
    printf("\n");
    
    hours = (seconds / 60) / 60;
    minutes = (seconds - hours*3600) / 60;
    remainingSeconds = (seconds - hours*3600) % 60;

    printf("%d seconds is about: %d hour, %d minutes and %d seconds\n", seconds, hours, minutes, remainingSeconds );
    printf("%d:%d:%d\n", hours, minutes, remainingSeconds);
    printf("\n");

}