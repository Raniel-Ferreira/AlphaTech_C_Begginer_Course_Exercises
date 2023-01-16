// Write aprogram that calculates the n-th term of an arithmetic sequence

#include <stdio.h>

int main()
{
    int an,a1,d,n;

    printf("Whats the starting number?\n");
    scanf("%d", &a1);
    printf("\n");
    printf("Whats the sum constant?\n");
    scanf("%d", &d);
    printf("\n");
    printf("Which position do you want to discover?\n");
    scanf("%d", &n);
    printf("\n");
    an = a1 + (n - 1) * d;
    printf("The n-th term of your progression is: %d", an);
    printf("\n");
}