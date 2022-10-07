#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr: previous mem allocated
 * @old_size: previous size
 * @new_size: new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return ('\0');

		return (new_ptr);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return ('\0');
	}

	new_ptr = malloc(new_size);

	if (!new_ptr)
		return ('\0');

	for (i = 0; i < old_size; i++)
		*((char *)new_ptr + i) = *((char *)ptr + i);

	free(ptr);
	return ((void *)new_ptr);
}
