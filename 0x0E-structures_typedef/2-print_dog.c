#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to struct dog
 *
 * This function prints the name, age, and owner of a struct dog.
 * If any of these values are NULL, it prints (nil) instead.
 * If the struct dog pointer is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.2f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
