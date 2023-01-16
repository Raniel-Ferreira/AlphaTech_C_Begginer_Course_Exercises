/*
Given 10 exercises to practice format specifiers using the "printf" function.
Write down what will be printed at each of them and then make sure of that by
testing the results.

Example:
1. printf("We have %d coins in the bank\n", 100);
2. printf("We have %f coins in the bank\n", 125.7);
3. printf("Year = %d\n", 2020);
4. printf("Your average grade is: %f \n", 95.13);
5. printf("num1 = %d, num2 = %d, sum = %d \n", 5, 7, 5+7);
6. printf("num1 = %f, num2 = %f, sum = %f \n", 5.2, 7.3, 9.5);
7. printf("num1 = %d, num2 = %d, sub = %d \n", 5, 3, 5-3);
8. printf("a = %d, b = %d, sum = a + b = %d \n", 3, 5, 3+5);
9. printf("a = %d, b = %d, sum = %d + %d = %d \n", 3, 5, 3, 5, 3+5);
10. printf("a = %d, b = %d, sum = a + b = %d + %d = %d \n", 3, 5, 3, 5, 3+5);

*/

#include <stdio.h>

int main () 
{
    printf("We have %d coins in the bank\n", 100000);
    printf("We have %.2f coins in the bank\n", 1000.57);
    printf("Year = %d\n", 2022);
    printf("Your average grade is: %.2f\n", 9.45);
    printf("num1 = %d, num2 = %d, sum = %d\n", 3, 4, 3+4);
    printf("num1 = %.2f, num2 = %.2f, sum = %.2f\n", 4.5, 3.12, 4.5 + 3.12);
    printf("num1 = %d, num2 = %d, sub = %d\n", 3, 4, 3 - 4);
    printf("a = %d, b = %d, sum = a + b = %d\n", 3, 5, 3 + 5);
    printf("a = %d, b = %d, sum = %d + %d = %d\n", 3, 5, 3, 5, 3 + 5);
    printf("a = %d, b = %d, sum = a + b = %d + %d = %d\n", 3, 5, 3, 5, 3 + 5);
    return 0;
}