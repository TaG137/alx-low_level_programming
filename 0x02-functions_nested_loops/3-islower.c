#include <stdio.h>

/**
 * _islower - checks if the given character 'c' is lowercase
 * Return: 1 if lowercase, 0 otherwise.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
