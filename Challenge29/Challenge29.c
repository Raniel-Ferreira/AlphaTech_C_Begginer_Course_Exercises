// Write a program that checks if a given number is "double-digit" or "triple-digit"

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Please type a number: ");
    scanf("%d", &number);

    if (number < 10 || number > 999)
        printf("Neither double or triple\n");
    else if (number > 9 && number < 100)
        printf("Double-digit\n");
    else if (number > 99 && number < 1000)
        printf("Triple-digit\n");

}