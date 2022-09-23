#include "main.h"
/**
 * *_strncat - concatenates n bytes of two string
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 *
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 1, i = 0;

	while (len != '\0' ;)
	{
		len++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	
	return (dest);
}
