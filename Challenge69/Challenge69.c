//The palindrome array exercise

#include <stdio.h>

#define SIZE 6

int main()
{
    int arr[SIZE] = {1,2,3,3,2,1};
    int i, flag = 1;

    for (i = 0; i < SIZE/2; i++)
    {
        if (arr[i] != arr[SIZE - 1 - i]) // [0] != [3] and [1] != [4]
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("This array is a Palindrome!!\n");
    else if (flag == 0)
        printf("This array is NOT a Palindrome!!\n");

   
    return 0;
}