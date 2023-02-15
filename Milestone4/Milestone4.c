//Write a program that receives grades and calculate the average grade using while loops

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    int gradeSum = 0, gradesCount = 0;

    printf("Please enter your grades or -1 to stop: ");
    scanf("%d", &grade);

    while (grade != -1)
    {
        gradeSum += grade;
        gradesCount++;
        printf("Please enter your grades or -1 to stop: ");
        scanf("%d", &grade);
    }

    printf("You've entered %d grades! \n", gradesCount);
    printf("And your Average Grade is %.2f", (float)gradeSum / gradesCount);

    return 0;
    
}