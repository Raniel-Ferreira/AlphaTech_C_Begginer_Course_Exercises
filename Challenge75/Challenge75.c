//Write a program that initialize a string and prints it

#include <stdio.h>

int main()
{
    char fullName[] = {"Raniel Ferreira"};
    int i = 0;

    while (fullName[i] != '\0')
    {
        printf("%c", fullName[i]);
        i++;
    }
    return 0;
}