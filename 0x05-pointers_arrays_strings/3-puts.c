#include "main.h"

/**
 * _putchar - the incrementation formular
 * _puts - function that prints a string
 * @str:- pointer to the string
 * Return: String and a new line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

