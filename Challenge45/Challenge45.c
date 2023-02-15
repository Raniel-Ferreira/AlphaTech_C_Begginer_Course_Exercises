// Write a program that receives an integer and prints out a right angle traingle whit the following pattern:
/*
n = 3
print:
1
22
333

n = 5
1
22
333
4444
55555
*/

#include <stdio.h>

int main()
{
    int triangleSize, i, j;

    printf("Please input the size of the triangle you want to make: ");
    scanf("%d", &triangleSize);

    for (i = 1; i <= triangleSize; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%d" , i);

        printf("\n");
    }
    
}