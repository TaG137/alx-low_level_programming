#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * memset - files constant byte into the memory area
 * pointed to by a pointer.
 * @n: unsigned int that stores the size of data
 * @s: points to the area where bytes should be stored
 * @b: a constant byte
 * Return: returns byte to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
