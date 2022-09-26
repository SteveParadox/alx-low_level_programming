#include "main.h"
/**
 * *_memset - function fills the first n bytes of the memory areapointed to s
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: void
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*s++ = b;
	}
	return (ptr);
}
