#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it
 * @size: The size of the array to be created
 * @c: The char to initialize the array with
 *
 * Return: If size = 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* If size = 0, return NULL */
	if (size == 0)
		return (NULL);

	/* Allocate memory for the array */
	array = malloc(sizeof(char) * size);

	/* If malloc fails, return NULL */
	if (array == NULL)
		return (NULL);

	/* Initialize each element of the array with 'c' */
	for (i = 0; i < size; i++)
		array[i] = c;

	/* Return the pointer to the array */
	return (array);
}
