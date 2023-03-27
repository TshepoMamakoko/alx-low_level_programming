#include "main.h"

/**
 * swap_int - changes the values of two ints
 *
 * @a: int to swap
 * @b: int to swap
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
