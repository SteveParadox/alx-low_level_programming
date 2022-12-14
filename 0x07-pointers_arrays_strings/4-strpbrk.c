#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be checked
 * @accept: string containing the only accepted bytes
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	char *seen = NULL;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (straccept(s[i], accept))
		{
			seen = (s + i);
			break;
		}
	}
	return (seen);
}
