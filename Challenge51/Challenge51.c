// Write a program that receives a number a prints out all th number that comes before the received number that are divisible by 3 and 5


#include <stdio.h>

int main()
{
    int i, num, sum = 0;

    printf("Please input a number: ");
    scanf("%d", &num);

    if (num < 15)
    {
        printf("There's no number divisible by 3 and 5 before this number");
        return 0;
    }
    else
    {
        for (i = 15; i <= num; i+=15)
        {
            if ((i % 3 == 0) && (i % 5 == 0))
            {
                printf("%d is divisible by both 3 and 5\n", i);
                sum += i;
            }
        }
    }
    
    printf("%d is the sum of all the divisible numbers.\n", sum);
    return 0;
    
}