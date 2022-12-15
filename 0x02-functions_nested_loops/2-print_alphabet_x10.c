#include "main.h"

/**
 *print_alphabet_x10 - prints lowercase letters 10 times
 *
 *Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	int i = 1, j;

	while (i <= 10)
	{
		j = 97;
		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
