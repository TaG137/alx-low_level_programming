#include <stdio.h>

/**
 * main - prints alphabet in lower and upper case
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}

