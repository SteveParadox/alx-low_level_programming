#include "main.h"

/**
 * is_palindrome - checks if a string is a palinndrome
 * @s: the string to check
 * Return: 1 if string is a palindrome, otherwise 0
 */

int _len(char *s);
int _str_rev(char *s, int len);

int is_palindrome(char *s)
{
	int len;

	len = _len(s);

	if (len <= 1)
		return (1);
	return (_str_rev(s, len));
}

/**
 * _str_rev - a function that reverses a string
 * @s: the string to reverse
 * @len: the lenght of the string
 * Return: A reversed string
 */

int _str_rev(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
		return (_str_rev(s + 1, len - 2));
	return (0);
}

/**
 * _len - calculates the length of a string
 * @s: the string to calculate the length
 * Return: the length of the string
 */

int _len(char *s)
{
	if (!*s)
		return (0);
	return (_len(s + 1) + 1);
}
