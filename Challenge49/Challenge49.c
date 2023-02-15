// Write a program that prints all the even numbers up to a received number as input


#include <stdio.h>

int main()
{
    int i, range, evenNum = 0;

    printf("Please input the number of even numbers you want to print: ");
    scanf("%d", &range);

    for (i = 0; i < range; i++)
        {
        evenNum += 2;
        printf("%d ", evenNum);
        }


}