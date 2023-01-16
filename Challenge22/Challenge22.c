// Write a program that receives a number of 3 digits and reverse its digits

# include <stdio.h>

int main()
{
    int number, units, tens, hundreds;
    
    
    printf("Please type a number of three digits:\n");
    scanf("%d", &number);

    units = number % 10;
    tens =  (number / 10) % 10;
    hundreds = number / 100;
    
    printf("The reverse form of your number is: %d%d%d\n", units, tens, hundreds);
    }