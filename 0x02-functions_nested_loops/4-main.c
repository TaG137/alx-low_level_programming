#include "main.h"

/**
 * main - checks code
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(0);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
