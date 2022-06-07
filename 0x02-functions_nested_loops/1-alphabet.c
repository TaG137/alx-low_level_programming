#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase and a
 * new line.
 *
 * Retrun: No return.
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}

