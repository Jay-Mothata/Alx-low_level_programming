#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the allocated memory,
 *	or NULL if nmemb = 0, size = 0, or al
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, bytes;

	/* If nmemb or size is 0, return NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Calculate total bytes to allocate */
	bytes = nmemb * size;

	/* Allocate memory */
	p = malloc(bytes);
	if (p == NULL)  /* If allocation fails, return NULL */
		return (NULL);

	/* Initialize memory to zero */
	for (i = 0; i < bytes; i++)
		p[i] = 0;

	return (p);
}
