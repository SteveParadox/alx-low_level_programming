#include "main.h"

/**
 * _strcat - Code to concatenate two strings
 * @dest: Parameter
 * @src: Parameter
 *
 * Return: 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int a = -1, i;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{

		while (src[a] != '\0')
		{
			a++;
			dest[i] = src[a];
			i++;
		}
	}
	return (dest);
}
