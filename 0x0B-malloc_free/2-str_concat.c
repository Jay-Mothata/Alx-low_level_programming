#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: If s1 or s2 = NULL - NULL.
 *         If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, j;

	/* If s1 or s2 is NULL, treat it as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Allocate memory for the new string */
	concat_str = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	/* If malloc fails, return NULL */
	if (concat_str == NULL)
		return (NULL);

	/* Copy s1 into the new string */
	for (i = 0; s1[i] != '\0'; i++)
		concat_str[i] = s1[i];

	/* Append s2 at the end of the new string */
	for (j = 0; s2[j] != '\0'; j++)
		concat_str[i + j] = s2[j];

	/* Add the null terminator at the end */
	concat_str[i + j] = '\0';

	/* Return the pointer to the concatenated string */
	return (concat_str);
}
