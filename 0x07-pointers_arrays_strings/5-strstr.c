#include "main.h"

/**
 * _strstr - finds the first occurrence of a string in another string
 * @haystack: a string to search within
 * @needle: the substring you want to find
 * Return: if found, returns the first occurence of needle, else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			}
		}
		haystack++;
	}
	return ('\0');
}
