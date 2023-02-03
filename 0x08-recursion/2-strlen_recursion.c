#include "main.h"

/**
 * _strlen_recursion - gets the length of a string
 * @s: the string to be counted
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (len);
	len = 1;
	return (len + _strlen_recursion(s + 1));
}
