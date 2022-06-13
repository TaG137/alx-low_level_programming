#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two integers.
 * @a: The first integer
 * @b: The second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *b;
	*b = *a;
	*a = n;
}
