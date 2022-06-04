#include <stdio.h>

/**
 * main - prints all combinations of numbers with
 * each number in the combinations being different.
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	int f, s;

	for (f = 0; f <= 9; f++)
	{
		for (s = 1; s <= 9; s++)
		{
			if (f != s)
			{
				putchar(f + '0');
				putchar(s + '0');
				if (f != 9 || s != 8)
				{
					putchar(' ');
					putchar(';');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
