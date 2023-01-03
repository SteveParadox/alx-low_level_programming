#include "main.h"

/**
 * _memcpy - copies a memory block from one area to another
 * @dest: destination to be copied to
 * @src: string to be copied
 * @n: number of characters to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
