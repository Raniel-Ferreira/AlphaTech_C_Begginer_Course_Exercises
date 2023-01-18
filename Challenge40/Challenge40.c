// Write a program that calculates the power of a given number using while loop

#include <stdio.h>

int main()
{
    int number, pow, powBkp, result;

    printf("Please enter your number: ");
    scanf("%d", &number);

    printf("Please enter power you want to calculate: ");
    scanf("%d", &pow);

    result = number;
    powBkp = pow;

    while (pow > 1)
    {
        result *= number;
        pow--;

        printf("The result is: %d\n", result);

    }

    printf("\n");
    printf("%d to the power of %d is: %d\n", number, powBkp, result);
    return 0;
}