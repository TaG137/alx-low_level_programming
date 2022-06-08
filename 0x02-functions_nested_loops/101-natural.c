#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 and 5
 * between 0 and 1024.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	unsigned long int sum, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (n = 0; n <= 1024; n++)
	{
		if (n % 3 == 0)
		{
			sum1 = n + sum1;
		} else if (n % 5 == 0)
		{
			sum2 = n + sum2;
		}
	}
	sum = sum1 + sum2;
	printf("%lu\n", sum);
	return (0);
}

