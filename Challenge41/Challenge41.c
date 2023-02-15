//Write a program that receives a valid grade and prints out. Use do while loop
//((Valid Grade > 0) && (Valid Grade < 100))

#include <stdio.h>

int main ()
{
    int grade;

    do
    {
        printf("Please insert your grade: ");
        scanf("%d", &grade);
        if (grade != 0)
        {
            printf("\n");
            printf("Thanks you've inserted %d, which is a valid grade!\n", grade);
        }
    } while ((grade < 100) && (grade > 0) && (grade != 0));
    
    printf("\n");
    printf("The grade you inserted is either zero,negative or greater than 100\n");
    return 0;
}