#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: the pointer to the first occurance of the
 * character.
 */

char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
