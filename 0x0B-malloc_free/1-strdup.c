#include <stdio.h>
#include"main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a new string
 * that is a duplicate of str in memory.
 * @str: The string that is duplicated.
 * Return: NULL if string is NULL or memory is
 * insufficient, else returns a pointer to copied string.
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}

