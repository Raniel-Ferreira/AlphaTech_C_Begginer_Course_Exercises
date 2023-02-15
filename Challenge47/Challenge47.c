// Write aprogram that receives a number and prints all integers from 1 up to the received number
// Example: num = 5
// 1, 2, 3, 4, 5
// 5, 4, 3, 2, 1
// Then calculate the sum of all the numbers from 1 up to the reveived number


#include <stdio.h>

int main()
{
    int i, num, sum;

    printf("Please tell me a number and I will count until i reach this number!\n");
    printf("Number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
        printf("%d ", i);
    
    printf("\n");

    for (i = num; i > 0; i--)
        printf("%d ", i);

    printf("\n");

    sum = 0;

    for (i = num; i > 0; i--)
        sum += i;

    printf("The total sum is: %d", sum);
}