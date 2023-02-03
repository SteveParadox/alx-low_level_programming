#include "main.h"

/**
 * _pow_recursion - gets the value of a number raised to power
 * @x: the number to raise
 * @y: the power
 * Return: the value of x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
