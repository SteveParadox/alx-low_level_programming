#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - print revversed string, followed by a newline
 * @s: parameter
 * Return: void
 */

void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (s[a])
	{
		a++;
	}

	a = a - 1;

	while (b < a + 1 / 2)
	{
		c = s[b];
		s[b] = s[a];
		s[a] = c;

		a--;
		b++;
	}
}
