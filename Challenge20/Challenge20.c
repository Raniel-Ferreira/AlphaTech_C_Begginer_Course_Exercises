// Write a program that only gets that removes the decimal part of an integer. Example 12.7 -> 0.7


#include <stdio.h>

int main()
{
    float decimal;

    printf("Please type your decimal number:\n");
    scanf("%f", &decimal);
    printf("The integer part of your number is: %d\n", (int)decimal);
    printf("The decimal part of your number is: %.2f\n", decimal - (int)decimal);
}