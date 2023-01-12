#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int _strlen(char *s);
/**
 * _strdup - copies a string from a parameter to a pointer
 * @str: string to be copied
 *
 * Return: NULL if str is NULL or if space is insufficient else the pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0, len = _strlen(str);

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}

	ptr[i] = '\0';
	return (ptr);

}

/**
 * _strlen - calculates the length of a string
 * @s: string's length to be calculated
 *
 * Return: lenght
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s++) != '\0')
		len++;
	return (len);
}
