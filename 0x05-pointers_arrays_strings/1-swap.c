#include "main.h"

/**
 * swap_int: function will swap the value of two integers
 * @a: parameter
 * @b: parameter
 *Description: This function takes a pointer to an int as a parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int  i;

	i = *a;
	*a = *b;
	*b = i;
}

