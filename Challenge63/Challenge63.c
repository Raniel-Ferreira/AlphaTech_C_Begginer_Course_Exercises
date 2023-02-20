//Write a program that creates an array and prints it in reverse order

#include <stdio.h>

#define SIZE 5

int main()
{
    int arr[SIZE];
    int i, counter = 0;

    for (i = 0; i <= SIZE; i++)
    {
        printf("Input a number: ");
        scanf("%d", &arr[i]);

    }

    for (i = SIZE; i >= 0; i--)
    {
        printf("Reverse Array Index #%d: %d\n", counter, arr[i]);
        counter++;
    }

    return 0;
}