//Write a program that receives three numbers && tell which one is the maximun && which is the minimum

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3,maximum, minimum;

    printf("Please input number1: ");
    scanf("%f", &num1);
    printf("Please input number2: ");
    scanf("%f", &num2);
    printf("Please input number3: ");
    scanf("%f", &num3);
    
    maximum = num1;
    minimum = num2;

    if (num1<num2)
    {
        maximum = num2;
        minimum = num1;
    }

    if (maximum < num3)
        maximum = num3;
    
    if (num3 < minimum)
        minimum = num3;

    printf("Max: %.2f\n", maximum);
    printf("Min: %.2f\n", minimum);

    return 0;
}