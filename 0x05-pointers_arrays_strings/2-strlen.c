#include "main.h"
/**
 * _strlen - should return the length of the string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int length = 0;

		while (s[length])
			length++;
	return (length);
}
