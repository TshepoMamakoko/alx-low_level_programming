#include <stdio.h>
/*
 * main - Entry point
 *
 * Description: 'a C program that prints the size of various types '
 *
 * return: Always 0 (Success)
 */

int main(char a, int b, long int c, long long int d, float e);
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %i bytes(s)\n", sizeof(float));
	return (0);
}
