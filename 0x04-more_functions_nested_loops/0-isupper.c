#include "main.h"

/**
 * _isupper - Code to check for upper case
 *@c: function parameter
 * Return: 1 if true and 0 if false
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	return (0);
}
