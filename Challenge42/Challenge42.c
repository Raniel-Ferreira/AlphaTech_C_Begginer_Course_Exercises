//Write a program that receives two number and calculates the power of the first number by the second using for loop


#include <stdio.h>

int main ()
{
    int num, pow, i, result;

    printf("Please insert a number you want to calculate the power: ");
    scanf("%d", &num);

    printf("Please insert the power: ");
    scanf("%d", &pow);

    result = num;

    for (i = 1; i <= pow; i++)
    {
        printf("%d in the power of %d is: %d\n", num, i, result);
        result *= num;

    }
    
}