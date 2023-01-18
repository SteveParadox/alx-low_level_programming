#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * array_range - creates an array of integers and initialize from min to max
 * @min: number to start from
 * @max: number to end at
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr, diff, i;

	if (min > max)
		return (NULL);

	diff = (max - min) + 1;

	ptr = malloc(sizeof(int) * diff);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		*(ptr + i) = min++;
	}
	return (ptr);
}
