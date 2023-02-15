// Write a program that calculates 1 cents double every day and compare it to 1 million

#include <stdio.h>

int main()
{
    int i, million = 1000000;
    float cents = 0.01, totalCents;

    totalCents = cents;

    for (i = 1; i <= 30; i++)
        totalCents *= 2;

    printf("If you chose to receive one million you'll end up wiht %d\n", million);
    printf("\n");
    printf("But if you choose to double a cent after one month you'll have: %.2f\n", totalCents);
    printf("\n");
    printf("\n");
    




    return 0;
}