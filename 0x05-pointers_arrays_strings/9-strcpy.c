#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: destination array
 * @src: source array
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
