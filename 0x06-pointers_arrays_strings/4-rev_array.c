#include "main.h"

/**
 * reverse_array - reverse an array of numbers
 * @a: parameter
 * @n: parameter
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int j, i = 0;

	while (i < n)
	{
		j = a[i];
		a[i++] = a [--n];
		a[n] = j;
	}
}
