#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string and
 * a new line
 * @str: the string
 */

void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2 != 0)
	{
		for (i = (len - 1) / 2; str[i] != '\0' && str[i] != str[len]; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
		
