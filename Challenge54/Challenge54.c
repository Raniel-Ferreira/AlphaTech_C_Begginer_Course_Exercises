//Write a program that receives a num and sums all the even and odds digits before that num


#include <stdio.h>

int main()
{
    int num;
    int evenSum = 0, oddSum = 0, currentNum = 0;

    printf("Enter num: ");
    scanf("%d", &num);

    while (num > 0)
    {
        currentNum = num % 10;
        if (currentNum % 2 == 0)
            evenSum += currentNum;
        else 
            oddSum +=  currentNum;

        num /= 10;    
    }
    
    printf("The sum of all even digits is: %d \n", evenSum);
    printf("The sum of all odd digits is: %d \n", oddSum);
    printf("\n");
    printf("Even Sum - Odd Sum = %d \n", evenSum - oddSum);



    return 0;
}