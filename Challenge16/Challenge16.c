// Write a program that calculates an employee salary based on hours salary and total hours worked

#include <stdio.h>

int main()
{
    float salary,result;
    int hours;

    printf("How much is your salary per hour?\n");
    scanf("%f", &salary);
    printf("How many hours do you work on a month?\n");
    scanf("%d", &hours);
    result = (float) hours * salary;
    printf("Then your salary is: %.2f\n", result);

}