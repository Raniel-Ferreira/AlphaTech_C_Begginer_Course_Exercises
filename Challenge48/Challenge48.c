// Write a program that receives a number and prints out it's multiplication table


#include <stdio.h>

int main()
{
    int num, range, i;

    printf("Which number do you want to know the multiplication table of? ");
    scanf("%d", &num);

    printf("What is the range of your table? ");
    scanf("%d", &range);

    printf("\n");

    for (i = 1; i <= range; i++)
        printf("%d * %d = %d\n", num, i, num * i);
    
}