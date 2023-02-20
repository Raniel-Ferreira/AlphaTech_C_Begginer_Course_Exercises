//Write a program that prints all unique elements of an array then print the ocunt of thee elements

#include <stdio.h>

#define SIZE 10

int main()
{
    int i, j, nonUniqueCount = 0, duplicateCount = 0;
    int values[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        printf("Please enter a value #%d: ", i+1);
        scanf("%d", &values[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < i; j++) // the j loop looks does the left side comparison
        {
            if (values[i] == values[j])
            {
                duplicateCount =1;
                break;
            }
        }
        if (duplicateCount == 1)
            break;
        else
            for (j = i +1; j < SIZE; j++) // after passing the left side this one does the right side
            {
                if (values[i] == values[j])
                {
                    printf("non-unique value: %d\n", values[i]);
                    nonUniqueCount++;
                    break;
                }    
            }
    }
    printf("Total unique elements in the array: %d", nonUniqueCount);
}