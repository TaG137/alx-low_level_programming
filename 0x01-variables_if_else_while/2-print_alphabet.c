#include <stdio.h>

/**
 * main - prints lowercase alphabet
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
