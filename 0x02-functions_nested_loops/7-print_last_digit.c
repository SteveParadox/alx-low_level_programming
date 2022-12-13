#include "main.h"

/**
 * print_last_digit - gets the last digit of a number
 * @l: function parameter
 *
 * Return: the last digit
 */

int print_last_digit(int l)
{
	if (l < 0)
	{
		l *= -1;
	}
	_putchar('0' + l % 10);
	return (l % 10);
}
