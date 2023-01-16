// Write a program that receives two numbers and does one of the four operations (+,=,*,/). Must use switch case

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char operator;

    printf("Please type the first number:");
    scanf("%d", &a);
    
    printf("Please type the second number:");
    scanf("%d", &b);

    printf("Please select which math operation you want to execute\n");
    printf("'+' for addition, '-' for subtraction, '*' for multiplication and '/' for division.\n" );
    printf("Operator: ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        printf("%d + %d = %d", a, b, a+b);
        break;
    
    case '-':
        printf("%d - %d = %d", a, b, a-b);
        break;
    
    case '*':
        printf("%d * %d = %d", a, b, a*b);
        break;
    
    case '/':
        if (b == 0)
            {
            printf("Cannot divide by 0");
            break;
            }

        printf("%d / %d = %d\n", a, b, a / b);
        printf("Remainder : %d", a%b);
        break;
    
    default:
        printf("Invalid Character, Try again!\n");
        break;
    }

}