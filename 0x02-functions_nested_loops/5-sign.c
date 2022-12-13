#include "main.h"

/**
 * print_sign - prints a sign
 * @n: function parameter
 *
 * Return: 1 if decimal equivalent is greater than 0,
 * 0 if it is 0 and -1 if it is less
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	_putchar('-');
	return (-1);
}
