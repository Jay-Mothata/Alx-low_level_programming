#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value (included) in the array
 * @max: maximum value (included) in the array
 *
 * Return: pointer to the newly created array,
 *	or NULL if min > max or allocation fails
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	/* If min > max, return NULL */
	if (min > max)
		return (NULL);

	/* Allocate memory for the array */
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)  /* If allocation fails, return NULL */
		return (NULL);

	/* Initialize array with values from min to max */
	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
