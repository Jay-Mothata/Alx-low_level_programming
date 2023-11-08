#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function as parameter on each element of array
 * @array: the array
 * @size: the size of array
 * @action: a pointer to the function to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL || action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
