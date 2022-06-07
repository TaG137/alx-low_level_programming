#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute from "00:00"
 * to "23:59".
 *
 * Return: 0 (success)
 */
void jack_bauer(void)
{
	int f, l;

	for (f = 0; f <= 23; f++)
	{
		for (l = 0; l <=59; l++)
		{
			_putchar(f / 10 + '0');
			_putchar(f % 10 + '0');
			_putchar(':');
			_putchar(l / 10 + '0');
			_putchar(l % 10 + '0');
			_putchar('\n');
		}
	}
}
