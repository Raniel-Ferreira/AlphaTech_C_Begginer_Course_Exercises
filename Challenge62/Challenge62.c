//Write a program that receives a phone number, put it on an array and print the highest digit

#include <stdio.h>

int main()
{
    int arr[7];
    int i, maxIndex;

    for (i = 0; i < 7; i++)
    {
        printf("Please enter number %d\n", i+1);
        scanf("%d", &arr[i]);

    }

    maxIndex = 0;

    for (i = 0; i < 7; i++)
    {
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }

    printf("Max index of this digit is %d\n", maxIndex);

    return 0;
}