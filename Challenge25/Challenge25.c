// Write a program that checks if a number is even or odd

#include <stdio.h>

int main()
{
    int number;

    printf("Please type your number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("Your number is even\n");
    else    
        printf("Your number is odd\n");

    return 0;
}