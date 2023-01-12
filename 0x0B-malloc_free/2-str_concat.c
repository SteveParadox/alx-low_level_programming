#include "main.h"
#include <stddef.h>
#include <stdlib.h>

int _strlen(char *s);
/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer with the contents s1 followed by s2
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int len_s1, len_s2, total, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	total = len_s1 + len_s2;
	str = malloc(total + 1);

	if (str == NULL)
		return (NULL);

	while (i < len_s1)
	{
		str[i] = s1[i];
		i++;
	}
	while (len_s1 < total)
	{
		str[len_s1] = *s2;
		len_s1++;
		s2++;
	}
	str[len_s1] = '\0';

	return (str);
}

/**
 * _strlen - calculates the length of a string
 * @s: the string to count
 * Return: the length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s++) != '\0')
		len++;
	return (len);
}
