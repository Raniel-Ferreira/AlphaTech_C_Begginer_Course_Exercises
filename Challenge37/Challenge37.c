// Write a program that receives a date and prints it in Hexadecimal

#include <stdio.h>

int main()
{
    int day, month, year;


    printf("Please enter a  valid date: ");
    scanf("%d%d%d", &day, &month, &year);

    printf("%d/%d/%d\n", day, month, year);

    printf("Your day in Hexadecimal is: 0x%X\n", day);
    printf("Your month in Hexadecimal is: 0x%X\n", month);
    printf("Your year in Hexadecimal is: 0x%X\n", year);
    
    return 0;
}