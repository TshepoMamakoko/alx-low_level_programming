#include "main.h"

/**
 * print_last_digit - function that prints last digit of a float
 *
 * @l: function parameter
 *
 * Return: k
 */

int print_last_digit(int l)
{
	int n;

	n = l % 10;
	if (l < 0)
		n = -n;
	return (n);
}
