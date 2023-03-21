#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'a C program that prints the size of various types'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	{
	printf("Size of a char: %ld byte(s)\n", (sizeof(a)));
	printf("Size of an int: %li byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %li bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %ld bytes(s)\n", (unsigned long) sizeof(e));
	}
	return (0);
}
