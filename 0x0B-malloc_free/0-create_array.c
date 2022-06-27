#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array og characters and
 * initializes them with a specific character
 * @size: size of memory to print
 * @c: the character to initialize
 * Return: pointer to array (succesfful) or NULL
 * (fail)
 */

char *create_array(unsigned int size, char c)
{
	char *pt;
	unsigned int s = 0;

	if (size == 0)
		return (NULL);
	pt = (char *) malloc(sizeof(char) * size);
	if (pt == NULL)
		return (0);
	while (s < size)
	{
		*(pt + s) = c;
		s++;
	}
	*(pt + s) = '\0';
	return (pt);
}
	
