// Write a program that receives an array of 3 number, copies it and prints both

#include <stdio.h>

#define SIZE 3

int main()
{
    int date[SIZE] = {1, 2, 2000};
    int copyDate[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
    {
        copyDate[i] = date[i];
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("Day: %d\n", date[i]);
        printf("Copied Day: %d\n", copyDate[i]);
    }
    return 0;
}