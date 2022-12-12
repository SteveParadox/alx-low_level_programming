#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int v;

	for (v = 97 ; v < 123; v++)
	{
		putchar(v);
	}
	/** Printing Capital letters */
	for (v = 65 ; v < 91 ; v++)
	{
		putchar(v);
	}
	putchar('\n');
	return (0);
}
