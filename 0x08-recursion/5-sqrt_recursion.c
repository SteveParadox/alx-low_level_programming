#include "main.h"

int _sqrt(int num, int n_root);
/**
 * _sqrt_recursion - returns square root of a number
 * @n: the number to find its square root
 * Return: the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - finds the square root of a number
 * @num: parameter 1
 * @n_root: root value
 * Return: square root
 */

int _sqrt(int num, int n_root)
{
	if (num > n_root)
		return (-1);
	else if (num * num == n_root)
		return (num);
	return (_sqrt(num + 1, n_root));
}
