#include <stdio.h>

/**
 * main - prints a combination of digits separated by an
 * apostrophe.
 *
 * Return: Always 0 (successful)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
			if (n != 9)
			{
			putchar(',');
			putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}

