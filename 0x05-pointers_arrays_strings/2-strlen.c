#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to be measured
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	/* increment length for each char until the null character */
	for (; *s != '\0'; s++)
	{
		length++;
	}

	return (length);
}
