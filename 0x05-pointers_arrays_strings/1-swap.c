#include "main.h"

/**
 * main: function will swap the value of two integers
 * @a: parameter
 * @b: parameter
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int  i;
	i = *a;
	*a = *b;
	*b = i;
}

