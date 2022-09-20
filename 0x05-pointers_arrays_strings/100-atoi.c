#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to integer
 * @s: parameter
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	unsigned int num = 0, sign = 1, start = 0;

	do {
		if (start && !isDigit(*s))
		{
			break;
		}
		if (*s == '-')
		{
			sign *= -1;
		}
		if (isDigit(*s))
		{
			start = 1;
			num = num * 10 + mapint(*s);
		}
		s++;
	} while (*s);
	return (sign * num);
}
