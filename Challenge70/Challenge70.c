//Write a program that finds out if an array is sorted

#include <stdio.h>

#define SIZE 5

int main()
{
    int i, flag = 2;
    int arr[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        printf("Please enter the element number %d of the array: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (i = 1; i < SIZE; i++)
    {
        if (arr[i-1] > arr[i])
        {
            flag = 0; //not sorted
            break;
        }
        if (arr[i-1] == arr[i])
        {
            flag = 1; //sorted a little
        }
    }

    if (flag == 2)
        printf("The array is Really Sorted!\n");
    else if (flag == 1)
        printf("The array is A little Sorted!\n");
    else if (flag == 0)
        printf("The array is NOT Sorted!\n");

    return 0;
}