//Write a program that gets two double numbers a returns the perimeter  of a rectangle

#include <stdio.h>

int main()
{
    double recHeight;
    double recWidth;
    double recPerimeter;

    printf("\n");
    printf("Let's calculate the area of a rectangle!\n");
    printf("\n");
    printf("\n");
    printf("Rectangle Height:") + scanf("%2f", &recHeight);
    printf("\n");
    printf("Rectangle Width:") + scanf("%2f", &recWidth);
    printf("\n");
    
    recPerimeter = recHeight + recWidth;

    printf("Your rectangle perimeter is: %.2f", recPerimeter);


    return 0;

}