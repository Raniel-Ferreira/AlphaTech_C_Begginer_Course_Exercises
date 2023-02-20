//Write a program that receive a number and sum all of its digits using recursion

#include <stdio.h>

int sumOfDigits (int num)
{
    if (num <= 9)
        return num;
    
    return num%10 + sumOfDigits(num/10);
}

int main()
{
    int number;

    printf("Tell me a number: ");
    scanf("%d", &number);

    printf("The sum of you number digits is: %d", sumOfDigits(number));

    return 0;
}