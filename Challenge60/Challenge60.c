//Write a program that receives a number and a digit, the the function should return
//  1. the amount of digits in NUM that are less than digit
//  2. the average of these digits

#include <stdio.h>

float lowerThanDigit (int number, int digit)
{
    int counter = 0, totalSum = 0;
    int bkp = number;

    if (number < 0)
        number *= (-1);

    while (number != 0)
    {
        if (number % 10 < digit)
        {
            counter++;
            totalSum += number % 10;
        }
        number /= 10;
    }

    printf("The total amount of digits in %d = %d\n", bkp, counter);
    printf("The total average of these digits is %.2f\n", (float)totalSum/counter);
    return 0;
}

int main()
{
    int num, dig;

    printf("Please type a number: ");
    scanf("%d", &num);

    printf("Please type a digit: ");
    scanf("%d", &dig);

    lowerThanDigit(num,dig);

    return 0;
}