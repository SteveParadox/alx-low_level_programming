#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search through
 * @accept: the string you wish to find
 * Return: the length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (straccept(s[i], accept))
			count++;
		else
			break;
	}
	return (count);
}
