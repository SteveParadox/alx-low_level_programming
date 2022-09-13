#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int r;
	int Base = 16;

	for (i = 0 ; i < Base ; i++)
	{
		r = i * 1;
		if (r < 10)
		{
			putchar(r + '0');
		}
		else
		{
			putchar(r + 87);
		}
	}
	putchar('\n');
	return (0);
}
