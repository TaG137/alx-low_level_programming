#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase execpt for
 * 'e' and 'q'
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		} 
		alpha++;
	}
	putchar('\n');
	return (0);
}

