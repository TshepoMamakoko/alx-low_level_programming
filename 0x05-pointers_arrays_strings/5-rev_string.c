#include "main.h"

/**
 * rev_string - this should print the string in reverse
 * @s: pointer that points to the string
 * Return: String in reverse (success)
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}

