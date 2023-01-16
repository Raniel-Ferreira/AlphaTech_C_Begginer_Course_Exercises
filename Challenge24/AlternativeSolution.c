// Write a program that receives X and calculate X^2, X^4, X^6 and X^8 

#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main()
{
    int x, x2, x4, x6, x8;

    printf("Please enter X: ");
    scanf("%d", &x);

    x2 = x*x;
    x4 = x2*x2;
    x6 = x4*x2;
    x8 = x6*x2;

    printf("X^2 = %d\n",x2);
    printf("X^4 = %d\n",x4);
    printf("X^6 = %d\n",x6);
    printf("X^8 = %d\n",x8);
    return 0;
}