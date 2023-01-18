#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer of the previous memory
 * @old_size: old size of ptr
 * @new_size: new size of new memory block
 * Return: Pointer to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n_ptr, *o_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	n_ptr = malloc(new_size);

	if (n_ptr == NULL)
		return (NULL);

	o_ptr = ptr;

	if (new_size > old_size)
	{
		while (i < old_size)
		{
			n_ptr[i] = o_ptr[i];
			i++;
		}
	}

	i = 0;

	free(ptr);

	return (n_ptr);
}
