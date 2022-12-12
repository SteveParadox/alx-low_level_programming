#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, k;

	i = 0;

	for (i = i ; i < 8 ; i++)
	{
		for (j = i + 1 ; j < 9 ; j++)
		{
			for (k = j + 1 ; k < 10 ; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if ((i == 7) && (j == 8) && (k == 9))
				{
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
