#include "main.h"
/**
 * _memcpy - a function that copies memory
 * @dest: where to be stored in memory
 * @src: memory where it is copied
 * @n: number of bytes
 *
 * Return: copied memory n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int b = n;

	for (; r < b ; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
