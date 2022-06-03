#include <stdio.h>

/**
 * main - prints all hexidecimal code and a line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char abc;

	for (n = 48; n < 58; n++)
	{
		putchar(n + '0');
	}
	for (abc = 'a'; abc <= 'f'; abc++)
	{
		putchar(abc);
	}
	putchar('\n');
	return (0);
}

