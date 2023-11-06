#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog
 * @d: pointer to the dog to free
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	/* Free the name and owner of the dog */
	free(d->name);
	free(d->owner);

	/* Free the dog itself */
	free(d);
}
