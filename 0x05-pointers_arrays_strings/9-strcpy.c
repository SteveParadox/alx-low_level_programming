#include "main.h"

/**
 * _strcpy - function that copies the string pointed by src
 * @dest: parameter
 * @src: parameter
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
