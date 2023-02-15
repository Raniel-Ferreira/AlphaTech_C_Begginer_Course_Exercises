// Write a program that receives a number and checks if it's a two digit number


#include <stdio.h>

void maxDigit (int num)
{
    if (num > 99 || num < 10)
        printf("This number is not a 2-digit number\n");
    else
    {
        if (num % 10 > num / 10)
            printf("The maximum digit of %d is %d", num , num % 10);
        else
            printf("The maximum digit of %d is %d", num , num / 10);
    }
}


int main()
{
    int number;

    printf("Please input a number: ");
    scanf("%d", &number);

    maxDigit(number);
    
    return 0;

}