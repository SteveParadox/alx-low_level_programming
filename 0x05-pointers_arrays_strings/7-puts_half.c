#include "main.h"

/**
 * put_half: print half of a string
 * @str: parameter
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int v;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		for (v = i / 2; str[v] != '\0'; v++)
		{
			_putchar(str[v]);
		}
	}
	else
	{
		for (v = (i - 1) / 2; v < i -1; v++)
		{
			_putchar(str[v + 1]);
		}
	}
	_putchat('\n');
}
