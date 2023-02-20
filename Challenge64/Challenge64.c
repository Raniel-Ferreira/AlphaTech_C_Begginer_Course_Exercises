//Write a program that initializes a 2D array

#include <stdio.h>

int main(void)
{
    int my2DArray [2][3] = {{1,5,9},{2,6,10}};
    int i, j;

    for (i= 0; i < 2; i++) //loop that goes around the rows
    {
        for (j = 0; j < 3; j++) //loop that goes around the colunms
        {
            printf("%d ", my2DArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}