//Write a program that rotates an array to the left by an N number


#include <stdio.h>

#define SIZE 4
#define N 2

int main()
{
    int arr[SIZE] = {5,4,7,3};
    int i, k, temp;

    for (k = 0; k < N; k++)
    {
        temp = arr[0];
        for (i = 1; i < SIZE; i++)
        {
            arr[i-1] = arr[i];
        }
        arr[SIZE - 1] = temp;
    }
    
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);   
    }
    return 0;
}