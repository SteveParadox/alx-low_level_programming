#include "main.h"

/**
 * print_line - draws a straight line in a terminal
 * @n: function parameter for the number of lines
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		__putchar('\n');
	else
	{
		for (i = 0 ; i < n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
