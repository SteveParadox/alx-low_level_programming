#include <stdio.h>

/**
 * main - sums the even numbers less than 4 million in the fibonacci sequence
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int f1 = 1, f2 = 0, fnext, sum;

	while (sum < 4000000)
	{
		fnext = f1 + f2;
		if ((fnext % 2 == 0))
			sum += fnext;
		f2 = f1;
		f1 = fnext;
	}
	printf("%d\n", sum);
	return (0);
}
