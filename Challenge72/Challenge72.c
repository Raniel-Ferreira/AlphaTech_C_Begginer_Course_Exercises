//Write a program that rotates an array to the left
// Example input: [1,2,3,4]
// Example output: [2,3,4,1]

#include <stdio.h>

#define SIZE 4

int main()
{
    int arr[SIZE] = {5,4,7,3};
    int i, temp;

    temp = arr[0];

    for (i = 1; i < SIZE; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[SIZE - 1] = temp;

    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);   
    }
    return 0;
}