#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _memcpy - copies bytes from one memory area to another
 * @n: unsigned int of memory area size
 * @src: bytes copied from here
 * @dest: memory area where bytes should be copied to
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
