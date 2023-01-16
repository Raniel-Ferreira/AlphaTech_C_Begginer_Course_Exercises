// Write a program that checks if a given year is a Leap Year

#include <stdio.h>

int main()
{
    int year;

    printf("Please enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
        printf("Your year is a Leap Year\n");
    else if (year % 100 == 0)
        printf("Your year is not a Leap Year\n");
    else if (year % 4 == 0)
        printf("Your year is probably a Leap Year\n");
    else
        printf("Year is not a Leap Year\n");
}