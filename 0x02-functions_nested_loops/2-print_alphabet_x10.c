#include "main.h"
/**
 * print_alphabet_x10 - should print the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char i;
	int r;

	for (r = 1; i <= 10; i++)
	{
	for (r = 'a'; r <= 'z'; r++)
	{
	_putchar(r);
	}
	_putchar('\n');
	i++;
	}
}
