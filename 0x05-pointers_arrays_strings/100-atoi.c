#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to integer
 * @s: parameter
 * Return: Always 0 (Success)
 */
int mapint(char a)
{
	if (a >= 48 && a <= 57)
	{
		return ((int)a - 48);
	}
	return (0);
}

int isDigit(char i)
{
	return (i >= '0' && i <= '9');
}

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
