#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	unsigned long num = 612852475143, i = 2;

	while ((num / i) != 1)
	{
		if ((num % i) == 0)
		{
			num /= i;
		}
		else
		{
			i++;
		}
	}

	printf("%lu\n", num);

	return (0);
}
