#include <stdio.h>

/**
 * main - Prints numbers in base 10 and a new line
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n;
	
	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
