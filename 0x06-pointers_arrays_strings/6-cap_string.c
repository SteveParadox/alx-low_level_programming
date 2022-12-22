#include "main.h"

/**
 * cap_string - capitalizes the first letter of a word
 * @str: string
 * Return: str
 */

char *cap_string(char *str)
{
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}'};
	int i = 0, j;
	char c;

	while (str[i])
	{
		if ((i == 0) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		for (j = 0 ; j <= 13 ; j++)
		{
			c = sep[j];
			if ((c == str[i]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] -= 32;
				break;
			}
		}
		i++;
	}
	return (str);
}
