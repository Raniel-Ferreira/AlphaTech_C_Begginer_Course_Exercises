// Write a program that receives a number of rows and prints a pyramid of values
/*
    1
   2 3
  4 5 6

*/

#include <stdio.h>

int main()
{
    int i, j, k, numInput, blankSpace, currentValue = 1;

    printf("How many rows do you want your pyramid to have? ");
    scanf("%d", &numInput);

    blankSpace = numInput-1;

    for (i = 1; i <= numInput; i++)
    {
        for (k = blankSpace; k >= 1; k--)
            printf(" ");
        
        for (j = 1; j <= i; j++)
        {
            printf("%d ", currentValue);
            currentValue += 1;
        }
        
    printf("\n");
    blankSpace--;

    }


}