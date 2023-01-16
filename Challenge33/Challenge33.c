//Write a program that receives an integer of seconds, then calculate the hours minutes and remaining seconds
// must print in this format HH:MM:SS !1:6:12


#include <stdio.h>

int main()
{
    int seconds,remainingSeconds, minutes, hours;

    printf("Please type the seconds:\n");
    scanf("%d", &seconds);
    printf("Now calculating...\n");
    printf("\n");
    
    hours = seconds / 3600;
    minutes = (seconds - hours*3600) / 60;
    remainingSeconds = (seconds - hours*3600) % 60;

    printf("%d seconds is about: %d hour, %d minutes and %d seconds\n", seconds, hours, minutes, remainingSeconds );
    
    if (hours < 10)   
        if (minutes < 10)
            printf("0%d:0%d:%d\n", hours, minutes, remainingSeconds);
            if (seconds < 10)
                printf("0%d:0%d:0%d\n", hours, minutes, remainingSeconds);
    
    printf("\n");

}