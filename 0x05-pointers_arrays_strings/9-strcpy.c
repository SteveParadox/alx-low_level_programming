#include "main.h"

/**
 * strcpy - function that copies the string pointed by src
 * @dest: parameter
 * @src: parameter
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != "\0")
	{
		i++;
		dest[i] = src[i];
	}
	return (dest);
}
