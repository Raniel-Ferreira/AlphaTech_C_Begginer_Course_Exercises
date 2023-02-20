//Write a program that receives a phone number, put it on an array and print the highest digit

#include <stdio.h>

int main()
{
    int arr[] = {1,4,5,6,7,0,1};
    int i, max;

    max = arr[0];

    for (i = 1; i < 7; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Max digit in the phone number is %d\n", max);

    return 0;
}