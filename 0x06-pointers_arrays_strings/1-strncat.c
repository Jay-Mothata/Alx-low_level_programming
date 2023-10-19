#include "main.h"

/**
 * _strncat - concatenates two strings, using at most 'n' bytes from src
 * @dest: destination string
 * @src: source string
 * @n: the maximum number of bytes to concatenate
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;
	char *src_start = src;
	int count = 0;

	while (*dest_end)
	{
		dest_end++;
	}

	while (*src_start && count < n)
	{
		*dest_end = *src_start;
		dest_end++;
		src_start++;
		count++;
	}

	if (count == n)
	{
		*dest_end = '\0';
	}

	return (dest);
}
