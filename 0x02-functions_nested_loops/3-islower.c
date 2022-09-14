#include "main.h"

/**
 * _islower - return 1 if char is lowercase and 0 if it is uppercase
 * @c: function argument
 *
 * Return: 1 for true and 0 for false
 */

int _islower(int c)
{
	if (( c >= 97) && (c < 123))
	{
		return(1);
	}
	return(0);
}
