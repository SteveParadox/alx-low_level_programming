#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of characters and initializes it
 * @size: size of the array
 * @c: the character to initailize it with
 * Return: NULL if size is 0 or if it fails else the pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size);

	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
