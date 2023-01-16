// Write a number that checks if two numbers are equal

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Please type the first number: ");
    scanf("%d", &num1);
    printf("Please type the second number: ");
    scanf("%d", &num2);

    if (num1 == num2)
        printf("True\n");
    else
        printf("False\n");
}