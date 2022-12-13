#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Return: Always - (success)
 */

int main(void)
{
	unsigned long f1 = 1, f2 = 0, fnext;
	int i;

	for (i = 1 ; i <= 98 ; i++)
	{
		fnext = f1 + f2;
		printf("%lu", fnext);
		if (i != 98)
			printf(", ");
		f2 = f1;
		f1 = fnext;
	}
	putchar('\n');
	return (0);
}
