// Write a program that receives three integers. The program should print divisible if in each pair between three number there is at least one number that can be divisible by the other

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Please type the first number: ");
    scanf("%d", &a);

    printf("Please type the second number: ");
    scanf("%d", &b);

    printf("Please type the third number: ");
    scanf("%d", &c);

    if (a == 0 || b == 0 || c == 0)
        printf("Cannot divide by 0! Please check your inputs and try again...\n");
        if ((a % b == 0 || b % a == 0) && (b % c == 0 || c % b == 0) && (a % c == 0 || c % a == 0))
            printf("DIVISIBLE\n");
        else
            printf("NOT DIVISIBLE\n");
}