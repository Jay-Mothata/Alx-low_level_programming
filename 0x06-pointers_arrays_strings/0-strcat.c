#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;
	char *src_start = src;

	while (*dest_end)
	{
		dest_end++;
	}

	while (*src_start)
	{
		*dest_end = *src_start;
		dest_end++;
		src_start++;
	}

	*dest_end = '\0';

	return (dest);
}
