// Write a program that swap the values of two variables, print before and after

#include <stdio.h>

int main()
{
	float a = 97.5;
	float b = 23.15;
	float temp;
	printf("a = %.2f\n", a);
	printf("b = %.2f\n", b); 
	temp = a;
	a = b;
	b = temp;
	printf("a = %.2f\n", a);
	printf("b = %.2f\n", b);
}