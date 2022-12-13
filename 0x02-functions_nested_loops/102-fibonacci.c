#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long i, f1 = 1, f2 = 0, fnext;

	for (i = 1 ; i <= 50 ; i++)
	{
		fnext = f1 + f2;
		printf("%lu", fnext);
		if (i != 50)
			printf(", ");
		f2 = f1;
		f1 = fnext;
	}
	putchar('\n');
	return (0);
}
