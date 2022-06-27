#include <stdio.h>
#include"main.h"
#include <stdlib.h>

/**
 * strdup - returns a pointer to a new string
 * that is a duplicate of str in memory.
 * @str: The string that is duplicated.
 * @pt: Pointer to duplicate string.
 * @len: Length of strings.
 * Return: NULL if string is NULL or memory is
 * insufficient, else returns a pointer to copied string.
 */

char *_strdup(char *str)
{
	char *pt;
	int len;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
	{
		pt = malloc(sizeof(char) * (len + 1));
		if (pt == NULL)
		{
			return (NULL);
		}
		pt[len] = str[len];
	}
	return (pt);
}

