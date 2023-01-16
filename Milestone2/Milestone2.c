//Write a program that converts Celsius to Farenheit and then Farenheit to Celsius


#include <stdio.h>

int main()
{
    int tempC, tempF;
    double conversion1, conversion2;

    printf("\n");
    printf("Please input the temperature in Celsius\n");
    scanf("%d", &tempC);
    printf("\n");

    conversion1 = (double)tempC * 1.8 + 32;

    printf("Your temperature converted to Farenheit is: %.2f\n", conversion1);
    printf("\n");

    return 0;
}

