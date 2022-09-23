#include "main.h"

/**
 * _strcmp: compares two strings
 * @s1: parameter
 * @s2: parameter
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while(s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
