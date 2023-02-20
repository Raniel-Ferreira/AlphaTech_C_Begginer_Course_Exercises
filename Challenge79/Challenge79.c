//Write a program that receive a number and counts all of its digits using recursion

#include <stdio.h>

int countOfDigits (int num)
{
    if (num <= 9)
        return 1;
    
    return 1 + countOfDigits(num/10);
}

int main()
{
    int number;

    printf("Tell me a number: ");
    scanf("%d", &number);

    printf("The amount of you number digits is: %d", countOfDigits(number));

    return 0;
}