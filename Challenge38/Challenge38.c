// Write a program that receives a char and tells if its a digit, uppercase or lowercase letter

#include <stdio.h>

int main ()
{
    char myCharacter;

    printf("Enter a character: \n");
    scanf("%c", &myCharacter);

    if (myCharacter >= 'A' && myCharacter <= 'Z')
        printf("Its's a uppercase!\n");
    else if (myCharacter >= 'a' && myCharacter <= 'z')
        printf("Its's a lowercase!\n");
    else if (myCharacter >= '0' && myCharacter <= '9')
        printf("Its's a digit!\n");
    else
        printf("Other...\n");

    return 0;

}