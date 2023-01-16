// Write aprogram that calculates the sum of all terms of an arithmetic sequence

#include <stdio.h>

int main()
{
    int sn,an,a1,d,n;

    printf("Whats the starting number?\n");
    scanf("%d", &a1);
    printf("\n");
    printf("Whats the sum constant?\n");
    scanf("%d", &d);
    printf("\n");
    printf("How many positions does your sequence has?\n");
    scanf("%d", &n);
    printf("\n");
    an = a1 + (n - 1) * d;
    printf("The n-th term of your progression is: %d\n", an);
    printf("\n");
    sn = (a1 + an) * n/2;
    printf("The Sum of the terms of your sequence is: %d\n", sn);
    printf("\n");
}