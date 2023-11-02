#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to the newly allocated space in memory, which contains s1,
 *         followed by the first n bytes of s2, and null terminated.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, j, len_s1 = 0, len_s2 = 0;

	/* Check if s1 and s2 are not NULL and calculate their lengths */
	if (s1 != NULL)
		len_s1 = strlen(s1);
	if (s2 != NULL)
		len_s2 = strlen(s2);

	/* If n is greater or equal to len_s2, use the entire s2 */
	if (n >= len_s2)
		n = len_s2;

	/* Allocate memory for the new string */
	new_str = malloc(sizeof(char) * (len_s1 + n + 1));
	if (new_str == NULL)  /* If allocation fails, return NULL */
		return (NULL);

	/* Copy len_s1 characters from s1 into new_str */
	for (i = 0; i < len_s1; i++)
		new_str[i] = s1[i];

	/* Copy n characters from s2 into new_str */
	for (j = 0; j < n; j++)
		new_str[i + j] = s2[j];

	/* Null terminate new_str */
	new_str[i + j] = '\0';

	return (new_str);
}
