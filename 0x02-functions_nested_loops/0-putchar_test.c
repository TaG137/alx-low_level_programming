#include <stdio.h>

int main(void)
{
	char* text="_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
		putchar(text[i]);
	}
	putchar('\n');
	return (0);
}
