#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str == NULL or str == "" or the function fails - NULL.
 *         Otherwise - a pointer to the array of words.
 */
char **strtow(char *str)
{
	char **words;
	int wc = 0, i;
	char *token, *str_copy;

	/* If str == NULL or str == "", return NULL */
	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* Count the number of words in the string */
	for (i = 0; str[i]; i++)
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			wc++;

	/* Allocate memory for the array of pointers */
	words = malloc((wc + 2) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	/* Split the string into words */
	str_copy = strdup(str);
	token = strtok(str_copy, " ");
	for (i = 0; token != NULL; i++)
	{
		words[i] = strdup(token);
		token = strtok(NULL, " ");
	}
	words[i] = NULL;

	/* Free the duplicate string */
	free(str_copy);

	/* Return the pointer to the array of words */
	return (words);
}
