#include "main.h"

/**
 * print_square - uses # to print the square of numbers
 * @size: funtion parameter for the number to square
 *
 * Return: void
 */

void print_square(int size)
{
	int i = 0, j = 0;

	if (size > 0)
	{
		for (; i < size ; i++)
		{
			for (; j < size ; j++)
				_putchar('#');
			j = 0;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
