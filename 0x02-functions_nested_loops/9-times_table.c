#include "main.h"

/**
 * times_table - print the 9 times table
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1 ; j <= 9 ; j++)
		{
			result = i * j;
			if (result >= 10)
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			else
			{
				_putchar(' ');
				_putchar('0' + result);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
