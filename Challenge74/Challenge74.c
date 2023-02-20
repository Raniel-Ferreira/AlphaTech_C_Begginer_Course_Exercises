//Write a program that rotates an array to the right by an N number


#include <stdio.h>

#define SIZE 4
#define N 2

int main()
{
    int arr[SIZE] = {5,4,7,3};
    int i, k, temp;

    for (k = 0; k < N; k++)
    {
        temp = arr[SIZE-1];
        for (i = SIZE - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }
    
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);   
    }
    return 0;
}