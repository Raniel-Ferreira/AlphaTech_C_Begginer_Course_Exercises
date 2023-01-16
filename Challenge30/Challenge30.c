// Write a program that receives an integer value and prints its absolute value

#include <stdio.h>

int main()
{
    int number;

    printf("Please type a number: ");
    scanf("%d", &number);
   
    if (number < 0)
    {
        number *= -1;
        printf("Absolute value is |%d|\n", number);
    }
    else
        printf("Absolute value is |%d|\n", number);
}