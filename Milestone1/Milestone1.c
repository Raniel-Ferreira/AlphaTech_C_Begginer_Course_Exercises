// Build a simple calculator using format specification and the four operations

#include <stdio.h>

int main() 
{
    printf("A = %d, B= %d\n", 4, 2);
    printf("\n");
    printf("Sum\n");
    printf("Result: %d + %d = %d\n", 4, 2, 4 + 2);
    printf("\n");
    printf("Subtraction\n");
    printf("Result: %d - %d = %d\n", 4, 2, 4 - 2);
    printf("\n");
    printf("Multiplication\n");
    printf("Result: %d * %d = %d\n", 4, 2, 4 * 2);
    printf("\n");
    printf("Division\n");
    printf("Result: %d / %d = %d\n", 4, 2, 4 / 2);
    printf("Remainder: %d %% %d = %d\n", 4, 2, 4 % 2); 
    
    return 0;


}