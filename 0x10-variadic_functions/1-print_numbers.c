#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: number separator
 * @n: numbers to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	u_int i;
	int num;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, u_int);
		printf("%d", num);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		else
			continue;
	}

	putchar('\n');
}
