//Practice program to understand pointers and operations

#include <stdio.h>

int main()
{
    int a, b;
    int *pointerA, *pointerB;

    printf("Give me a number for variable a: ");
    scanf("%d", &a);

    printf("Give me a number for variable b: ");
    scanf("%d", &b);

    printf("\n");

    printf("Number 1 = %d | Number 2 = %d\n", a, b);
    
    pointerA = &a; //pointer a receives the adress of a
    pointerB = &b; //pointer b receives the adress of b
    
    printf("\n");

    printf("Number 1 = %d | Number 2 = %d\n", a, b);
    
    *pointerA = *pointerA + 1; // 5 + 1
    *pointerB = *pointerB + 3; // 7 + 3
    
    printf("\n");

    printf("Number 1 = %d | Number 2 = %d\n", a, b);
    
    pointerA = pointerB; // pointerA is now pointing to b so pointerA -> b and pointerB -> b
    pointerB = pointerA; // pointerB -> b
    
    printf("\n");

    printf("Number 1 = %d | Number 2 = %d\n", a, b); // 6 , 10
    printf("*pointerA = %d | *pointerB = %d\n", *pointerA, *pointerB); // 10, 10
    
    a = *pointerB; // a = 10
    b = a - 3; // b = 10 - 3

    printf("\n");

    printf("Number 1 = %d | Number 2 = %d\n", a, b); // 10, 7
    printf("\n");

    return 0;
}