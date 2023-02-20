// Write a program that receives a character and returns in lower case


#include <stdio.h>

char toLower(char letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return letter - 'A' + 'a'; //you're using the ASCII position numbers position
	else
		return letter;
}


char toUpper(char letter)
{
	if (letter >= 'a' && letter <= 'z')
		return letter - 'a' + 'A'; //you're using the ASCII position numbers position
	else
		return letter;
}


int main()
{
	char a;

	printf("Please type a letter:");
	scanf("%c", &a);

	printf("Your letter in lowerCase is: %c\n", toLower(a));
	printf("\n");
	printf("Your letter in upperCase is: %c\n", toUpper(a));


	return 0;
}