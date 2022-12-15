#include "main.h"

/**
 * print_triangle - prints a triangle with #
 * @size: function parameter
 *
 * Return: void
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, n = size - 1;

		for (i = 0 ; i < size ; i++)
		{
			for (j = 0 ; j < size ; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
