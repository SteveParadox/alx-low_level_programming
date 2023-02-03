#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned integer
 * @b: binary number to convert
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0, dec = 1;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (--len >= 0)
	{
		if (b[len] > '1')
			return (0);
		if (b[len] == '1')
			num += dec;
		dec *= 2;
	}
	return (num);
}
