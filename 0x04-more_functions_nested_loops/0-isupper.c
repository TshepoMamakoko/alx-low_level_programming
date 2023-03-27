#include "main.h"
#include <stdio.h>

/**
 * _isupper - checksfor uppercase characters
 *
 * @c: The parameter to be checked
 *
 * Return: 1 if uppercase else return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 98)
		return (1);
	else
		return (0);
}
