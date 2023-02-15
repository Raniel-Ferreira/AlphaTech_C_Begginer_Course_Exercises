//Write a program that repeats a phrase for a given number


#include <stdio.h>

int main()
{
    int number, i;

    printf("How many times do you want to write? \n");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        printf("I'm sorry for not listening to my *Teacher*. I will practice more next time!\n");    
    }

    printf("That's the for loop solution let's go for the next one!\n");
    printf("\n");
    printf("\n");
    printf("\n");
    
    i = 1;

    printf("How many times do you want to write? \n");
    scanf("%d", &number);


    while (i <= number)
    {
        printf("I'm sorry for not listening to my *Teacher*. I will practice more next time!\n");    
        i++;
    }

    printf("That's the while solution let's go for the last one!\n");
    printf("\n");
    printf("\n");
    printf("\n");
    
    i = 1;

    printf("How many times do you want to write? \n");
    scanf("%d", &number);

    do
    {
        printf("I'm sorry for not listening to my *Teacher*. I will practice more next time!\n");    
        i++;
    } while (i <= number);
    
    printf("That's the do while solution!\n");
    printf("\n");
    printf("You've made three approaches on one program congratulations\n");
    printf("\n");
    


}