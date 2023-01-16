//Write a program that gets two double numbers a returns athe area of a rectangle

#include <stdio.h>

int main()
{
    double recHeight;
    double recWidth;
    double recArea;

    printf("Let's calculate the area of a rectangle!\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Rectangle Height:") + scanf("%2f", &recHeight);
    printf("\n");
    printf("Rectangle Width:") + scanf("%2f", &recWidth);
    printf("\n");
    
    recArea = recHeight * recWidth;

    printf("Your rectangle area is: %.2f", recArea);


    return 0;

}