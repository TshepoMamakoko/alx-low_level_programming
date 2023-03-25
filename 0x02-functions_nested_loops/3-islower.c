#include "main.h"

/**
 * _islower - this function will print the lowercase
 *
 * @c: the parameter is set and should print
 * Return: 1 if lowercase
 * else return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
