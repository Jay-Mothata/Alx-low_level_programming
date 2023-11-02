#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes, of the new memory block
 *
 * Return: pointer to the newly allocated memory,
 *	or NULL if new_size = 0 and ptr is not NULL, or if malloc fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	/* If new_size == old_size, do not do anything and return ptr */
	if (new_size == old_size)
		return (ptr);

	/* If ptr is NULL, then the call is equivalent to malloc(new_size) */
	if (ptr == NULL)
		return (malloc(new_size));

	/* The call is equivalent to free(ptr) */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* Allocate memory for the new size */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL) /* If malloc fails, return NULL */
		return (NULL);

	/* Copy the contents from the old memory to the new memory */
	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = ((char *)ptr)[i];

	/* Free the old memory */
	free(ptr);

	return (new_ptr);
}
