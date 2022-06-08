#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the times table of numbers
 * between 0 and 15.
 * @n: The number you need to print the times table of.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int m, o, p;

	if (n <= 15 && n >= 0)
	{
		for (p = 0; p <= n; p++)
		{
			for (m = 0; m <= n; m++)
			{
				o = m * p;
				if (m != n)
				{
					if (o < 10)
					{
						printf("   %d,", o);
					} else if (o >= 10 && o < 100)
					{
						printf("  %d,", o);
					} else if (o >= 100)
					{
						printf(" %d,", o);
					}
				} else if (m == n)
				{
					if ( o < 10)
					{
						printf("   %d$\n", o);
					} else if (o >= 10 && o < 100)
					{
						printf("  %d$\n", o);
					} else if (o >= 100)
					{
						printf(" %d$\n", o);
					}
				}
			}
		}
	}
}
			

