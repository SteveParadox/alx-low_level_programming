#include "main.h"

/**
 * *_strncat - concatenates n bytes of two string
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int len, i = 0;

	for  (len = 0; len != '\0' ; len++);

	while (i < n && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}

	return (dest);
}
