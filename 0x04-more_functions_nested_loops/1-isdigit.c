#include "main.h"

/**
 * _isdigit - check if the character is a digit
 * @c: function parameter
 *
 * Return: 1 if true amd 0 if false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
