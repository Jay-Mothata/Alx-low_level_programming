#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * @str: The string to be duplicated.
 *
 * Return: If str = NULL - NULL.
 *         If insufficient memory was available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == NULL) /* Check if str = NULL */
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	/* Allocate memory for the new string */
	aaa = malloc(sizeof(char) * (i + 1));

	/* If malloc fails, return NULL */
	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];

	return (aaa);
}
