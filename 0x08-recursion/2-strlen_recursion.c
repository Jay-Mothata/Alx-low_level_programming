#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string 's' (number of characters) or 0 if 's'
 * is an empty string
 */
int _strlen_recursion(char *s)
{
	/* If the current character is not the null character */
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		/* If the current character is the null character, return 0 */
		return (0);
	}
}
