#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: function parameter
 *
 * Return: 1 if true and 0 if false
 */

int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c < 123)))
	{
		return (1);
	}
	return (0);
}
