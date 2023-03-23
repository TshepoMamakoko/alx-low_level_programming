#include "main.h"
/**
 * print_alphabet_x10 - should print the alphabet 10 times
 * main - void
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	while (c <= 10)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
		i++;
	}
}
