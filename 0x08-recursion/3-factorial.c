#include "main.h"

/**
 * factorial - gets the factorial of a number
 * @n: the number to calculate its factorial
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
