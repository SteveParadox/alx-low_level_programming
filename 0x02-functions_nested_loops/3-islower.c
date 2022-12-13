#include "main.h"

/**
 * _islower - returns 1 if char is lowercase and 0 if char is uppercase
 * @c: function argument
 *
 * Return: 1 for true and 0 for false
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
