// Write a program that receives a number a prints out all th number that comes before the received number that are divisible by 3 OR 5


#include <stdio.h>

int main()
{
    int i, num, sum = 0;

    printf("Please input a number: ");
    scanf("%d", &num);

    if (num <= 2)
    {
        printf("There's no number divisible by 3 or 5 before this number");
        return 0;
    }
    else if (num > 2)
    {
        for (i = 3; i <= num; i + 3)
            sum += i;

        for (i = 5; i <= num; i + 5)    
        {
            if (i % 3 != 0)
                sum += i;
        }
    }
    
    printf("%d is the sum of all the divisible numbers.\n", sum);
    return 0;
    
}