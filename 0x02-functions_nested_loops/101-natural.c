#include <stdio.h>

/**
 * main - sums the multiples of 3 below 1024
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int m = 1024, sum;

	while (m > 0)
	{
		if ((m % 3 == 0) || (m % 5 == 0))
		{
			sum += m;
		}
		m--;
	}
	printf("%d\n", sum);
	return (0);
}
