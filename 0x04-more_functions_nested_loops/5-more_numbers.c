#include "main.h"

/**
 * more_numbers: prints from 1 to 14 ten times
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i = 0 ;
	int j;

	while ( i < 11)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			if (j > 9)
			{
				_putchar('0' + (j / 10)); 
			}
			_putchar('0' + j % 10);
		}
		i++;

		_putchar('\n');
	}
}
	
