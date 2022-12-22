#include "main.h"

/**
 * reverse_array - reverses an array of numbers
 * @a: array to reverse
 * @n: size of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int c, i = 0;

	while (i < n)
	{
		c = a[i];
		a[i++] = a[--n];
		a[n] = c;
	}
}
