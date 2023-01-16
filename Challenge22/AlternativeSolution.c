// Write a program that receives a number of 3 digits and reverse its digits

# include <stdio.h>

int main()
{
    int number, units, tens, hundreds, reversedNum;
    
    
    printf("Please type a number of three digits:\n");
    scanf("%d", &number);

    units = number % 10;
    tens =  (number / 10) % 10;
    hundreds = number / 100;
    
    reversedNum = units;
    reversedNum = reversedNum * 10 + tens;
    reversedNum = reversedNum * 10 + hundreds;

    printf("The reverse form of your number is: %d\n", reversedNum);
    }