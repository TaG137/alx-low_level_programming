#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: the pointer to the first occurance of the
 * character.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s - 1);
		} else
		{
			return (NULL);
		}
	}
}
