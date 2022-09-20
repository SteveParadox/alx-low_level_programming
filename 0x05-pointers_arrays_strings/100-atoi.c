#include "main.h"
#include <stdio.h>

/**
 * mapint - map a character to integer form
 * @a: parameter
 * Return: int
 */

int mapint(char a)
{
	if (a >= 48 && a <= 57)
	{
		return ((int)a - 48);
	}
	return (0);
}

/**
 * isDigit - returns true if i is an integer
 * @i: parameter
 * Return: Boolean
 */

int isDigit(char i)
{
	return (i >= '0' && i <= '9');
}

/**
 * _atoi - Converts string to integer
 * @s: parameter
 * Return: int
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
