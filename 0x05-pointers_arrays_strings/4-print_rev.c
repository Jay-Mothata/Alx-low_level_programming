#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	int length = 0;
	char *end = s;

	while (*end)
	{
		++end;
		++length;
	}

	while (length > 0)
	{
		_putchar(*(end - 1));
		--end;
		--length;
	}

	_putchar('\n');
}
