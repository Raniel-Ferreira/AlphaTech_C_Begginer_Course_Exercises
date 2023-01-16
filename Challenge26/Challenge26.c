// Write a program that receives two numbers and print wich one is the maximum and the minimum

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;

    printf("Please input number1: ");
    scanf("%f", &num1);
    printf("Please input number2: ");
    scanf("%f", &num2);
    

    if (num1 > num2)
    {
        printf("Maximum is %.2f\n", num1);
        printf("Minimum is %.2f\n", num2);
    }
    else
    {
        printf("Maximum is %.2f\n", num2);
        printf("Minimum is %.2f\n", num1);
    }   
    return 0;
}