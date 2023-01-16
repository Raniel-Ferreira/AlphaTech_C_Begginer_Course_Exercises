//Write a program that calculates the average of three grades, you must use type casting

#include <stdio.h>

int main()
{
    int grade1, grade2, grade3;
    double average;

    printf("\n");
    printf("Please enter your grades\n");
    printf("\n");
    printf("Grade 1:\n") + scanf("%d", &grade1);
    printf("\n");
    printf("Grade 2:\n") + scanf("%d", &grade2);
    printf("\n");
    printf("Grade 3:\n") + scanf("%d", &grade3);
    printf("\n");

    average = ((double) grade1 + grade2 +grade3) / 3;
    
    printf("Your average grade is: %.2f", average);

    return 0;

}