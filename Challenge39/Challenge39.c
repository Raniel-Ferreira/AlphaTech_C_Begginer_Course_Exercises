// Write a program that prints a given number of asterisks inputed by the user

#include <stdio.h>

int main()
{
    int asteriskNumber, repeat = 0;

    printf("Enter a number of asterisks you want to see: ");
    scanf("%d", &asteriskNumber);


    while (repeat < asteriskNumber)
    {
        printf("*");
        repeat++;
    }
    


    return 0;
}