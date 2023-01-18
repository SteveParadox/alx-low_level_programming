#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int _strlen(char *s);

/**
 * string_nconcat - concatenates s1 with s2 for a number of n bytes
 * @s1: string to append
 * @s2: string to concatenate with
 * @n: number of bytes to copy
 * Return: address of the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_len, s2_len, i, j, t_len, num;
	char *str;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (num >= s2_len)
		num = s2_len;

	t_len = s1_len + num + 1;

	str = malloc(sizeof(*str) * t_len);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < num; j++)
		str[i + j] = s2[j];

	str[i + j] = '\0';

	return (str);
}

/**
 * _strlen - calculates the length of a string
 * @s: the string to count
 * Return: the length
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	return (len);
}
