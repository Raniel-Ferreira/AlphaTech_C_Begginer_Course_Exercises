//Write a program that calculates the birthyear of a person by receiving an input of age and year


#include <stdio.h>

int main()
{
    int year;
    int age;
    int birthyear;

    printf("Hello! Let's find out your birthyear? \n");
    printf("Tell me today's year:") + scanf("%d", &year);
    printf("\n");
    printf("Tell me your age:") + scanf("%d", &age);
    printf("\n");

    birthyear = year - age;

    printf("Your birthyear is: %d", birthyear);

    return 0;

}