#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet in lower
 * case 10 times and each time on a new line
 *
 * Return: Always 0 (Successful)
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int i = 1;

	while (i <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
		i++;
	}
}

