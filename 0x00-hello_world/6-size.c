#include <stdio.h>
/*
 * main - Entry point
 *
 * Description: 'a C program that prints the size of various types '
 *
 * return: (0)
 */

int main(void)
{
	sizeof(char);

	sizeof(int);

	sizeof(long int);

	sizeof(long long int);

	sizeof(float);

	printf("Size of a char: %c bytes(s)\n", 'char');
	printf("Size of an int: %d byte(s)\n "), 'int';
	printf("Size of a long int: %d byte(s)\n ", 'long int');
	printf("Size of a long long int: %d byte(s)\n ", 'long long int');
	printf("Size of a float: %f byte(s)\n", 'float');
	return (0);
}
