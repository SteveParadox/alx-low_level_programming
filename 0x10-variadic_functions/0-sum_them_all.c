#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all its parameters
 * @n: numbers to sum
 * Return: the sum of all parameters, if n is 0 return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	u_int i, sum = 0;

	if (n != 0)
	{
		va_start(arg, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arg, u_int);
		}
		va_end(arg);
		return (sum);
	}
	return (0);
}
