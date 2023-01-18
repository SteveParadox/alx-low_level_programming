#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates a memory for a array
 * @nmemb: number of memory to allocate
 * @size: number of bytes for each memory
 *
 * Return: address of the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*(ptr + i) = 0;

	return (ptr);
}
