#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - print positive negative or zero
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("int %d is positive\n", n);
	}
	else if (n < 0)
	{
	printf("int %d is negative", n);
	}
	else
	{
	printf("int %d is zero", n);
	}
	return (0);
}
