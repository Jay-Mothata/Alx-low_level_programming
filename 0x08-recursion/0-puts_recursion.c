#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	/* If the current character is not the null character */
	if (*s)
	{
		/* Print the current character */
		_putchar(*s);
		/* Recursively call _puts_recursion on the next character */
		_puts_recursion(s + 1);
	}
	else
	{
		/* If the current character is the null character, print a new line */
		_putchar('\n');
	}
}
