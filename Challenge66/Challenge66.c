//Write a program that receives two numbers and prints their values and their adresses

#include <stdio.h>

int main()
{
    int number1, number2;

    printf("Please input the first number: ");
    scanf("%d", &number1);
    
    printf("Please input the second number: ");
    scanf("%d", &number2);

    printf("Number 1 value is %d\n", number1);
    printf("Number 1 adress is %p\n", &number1);

    printf("Number 2 value is %d\n", number2);
    printf("Number 2 adress is %p\n", &number2);


    return 0;
}