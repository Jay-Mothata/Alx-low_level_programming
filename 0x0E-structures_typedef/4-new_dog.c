#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: a pointer to the new dog, or NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	/* Allocate memory for the new dog */
	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		return (NULL);
	}

	/* Copy the name into the new dog */
	new->name = strdup(name);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	/* Copy the owner into the new dog */
	new->owner = strdup(owner);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	/* Set the age of the new dog */
	new->age = age;

	return (new);
}
