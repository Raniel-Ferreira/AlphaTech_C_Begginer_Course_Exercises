// Write a program that receives a size value from the user. Then the program should read a sequence of inputs equal to the given size and prints out if the sequence is ascending or not

#include <stdio.h>

int main()
{
    int size, i, currentValue, previousValue, ascendingFlag = 1;

    printf("Please input the size of your sequence: ");
    scanf("%d", &size);

    if (size <= 0)
        printf("Please try again!\n");
    else
    {    do
        {
            printf("Please input the value: \n");
            scanf("%d", &currentValue);
            if (currentValue <0)
                printf("Number isn't positive!\n");
            else
                if (currentValue <= previousValue)
                    ascendingFlag = 0;
                
                previousValue = currentValue;
                size--;
        }while (size >0);

        if (ascendingFlag == 1)
            printf("This sequence is Ascending!\n");
        else
            printf("This sequence is NOT ascending!\n");

    }
    return 0;
}