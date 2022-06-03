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

	for (n = 0; n < 10; n++)
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

