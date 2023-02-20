//Write a program tha has a function to determinate the size of a string

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int strlen(char *str)
{
    int lenght=0;

    while(str[lenght] != "\0")
    {
        lenght++;
    }
    return lenght;
}

int main()
{
    int stringLenght;
    char testStr[SIZE];
    
    fgets(testStr);
    stringLenght = strlen(testStr);
    
    printf("The lenght of the string %s is %d", testStr, stringLenght);
    
    return 0;
}