#include <stdio.h>

/**
 * _isalpha - checks if character is an alphabet
 * @c: the character needing the check
 *
 * Return: 1 if character is an alphabet, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
