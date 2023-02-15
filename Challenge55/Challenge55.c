//Write a program that receives a sequence of numbers and sums all the odd numbers in the sequence

#include <stdio.h>

int main()
{
    int i, size, currentValue, oddSum = 0;

    printf("Enter size of your sequence: \n");
    scanf("%d", &size);

    for (i = 1; i <= size; i++)
    {
        printf("Enter a value: ");
        scanf("%d", &currentValue);
        
        if (currentValue % 2 == 1)
            oddSum += currentValue;
    }

    printf("Odd sum = %d\n", oddSum);

    return 0;
}