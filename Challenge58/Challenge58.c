// Write a program that calculates the factorial of the received number using functions

#include <stdio.h>

void calculateFactorial (int num)
{
    int result, i;

    result = 1;

    for (i = 1; i <= num; i++)
    {
        result *= i;
    }

    printf("The factorial of %d is equal to: %d", num, result);
}



int main()
{
    int number;

    printf("Please input a number: ");
    scanf("%d", &number);

    calculateFactorial(number);

    return 0;
}