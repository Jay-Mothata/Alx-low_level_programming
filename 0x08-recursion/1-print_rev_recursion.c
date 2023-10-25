#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	/* If the current character is not the null character */
	if (*s)
	{
		/* Recursively call _print_rev_recursion on the next character */
		_print_rev_recursion(s + 1);
		/* Print the current character */
		_putchar(*s);
	}
}
