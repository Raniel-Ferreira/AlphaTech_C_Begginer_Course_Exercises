//Write a program that prints a date using structs

#include <stdio.h>

struct date
{
    int day, month, year;
};

int main()
{
    struct date today;
    printf("Enter today's day: ");
    scanf("%d", &today.day);
    printf("Enter today's month: ");
    scanf("%d", &today.month);
    printf("Enter today's year: ");
    scanf("%d", &today.year);

    printf("Today is %d/%d/%d.\n", today.day, today.month, today.year);

    return 0;
}