#include <stdio.h>

/**
 * main - prints all combinations of 3 numbers with
 * each number in the combinations being different.
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	int f, s, t;

	for (f = 0; f <= 9; f++)
	{
		for (s = 1; s <= 9; s++)
		{
			for (t = 2; t <= 9; t++)
			{
				if (f < s && s < t)
				{
					putchar(f + '0');
					putchar(s + '0');
					putchar(t + '0');
					if (f != 7 || s != 8 || t != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

