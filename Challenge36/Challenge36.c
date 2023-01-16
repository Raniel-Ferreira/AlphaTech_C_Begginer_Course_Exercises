// Write a program that receives a day,month and a year
// The program should find and print the next day on the calendar

#include <stdio.h>
#include <stdbool.h>


int main()
{
    int day, month, year;
    bool leapYear = false;

    printf("Please enter a  valid date: ");
    scanf("%d%d%d", &day, &month, &year);

    printf("%d/%d/%d", day, month, year);

    if (year % 400 == 0)
        leapYear = true;
    else if (year % 4 == 0)
        leapYear = true;
    
    if (month == 0 || month > 12)
        printf("Your month is invalid, please type again...\n");
    else if (month == 2 && leapYear == true)
        

    
    
    
    return 0;
}