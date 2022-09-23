#include "main.h"
/**
 * *_strcat - Code to concatenate two strings
 * @dest: Parameter
 * @src: Parameter
 *
 * Return: 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	return (dest);
}
