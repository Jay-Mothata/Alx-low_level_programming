#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * word_count - Counts the number of words in the string.
 * @str: The string to be counted.
 *
 * Return: The number of words in the string.
 */
int word_count(char *str)
{
	int wc = 0;
	char *token, *str_copy;

	str_copy = strdup(str);
	token = strtok(str_copy, " ");
	while (token != NULL)
	{
		wc++;
		token = strtok(NULL, " ");
	}

	free(str_copy);
	return (wc);
}

/**
 * duplicate_words - Duplicates the words into the array of pointers.
 * @words: The array of pointers.
 * @str: The string to be split.
 * @wc: The number of words.
 *
 * Return: void
 */
void duplicate_words(char **words, char *str, int wc)
{
	int i;
	char *token, *str_copy2;

	(void)wc;

	str_copy2 = strdup(str);
	token = strtok(str_copy2, " ");
	for (i = 0; token != NULL; i++)
	{
		words[i] = strdup(token);
		token = strtok(NULL, " ");
	}
	words[i] = NULL;

	free(str_copy2);
}

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
	int wc;

	/* If str == NULL or str == "", return NULL */
	if (str == NULL || str[0] == '\0' || strcmp(str, " ") == 0)
		return (NULL);

	/* Count the number of words in the string */
	wc = word_count(str);

	/* Allocate memory for the array of pointers */
	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	/* Duplicate the words into the array of pointers */
	duplicate_words(words, str, wc);

	/* Return the pointer to the array of words */
	return (words);
}
