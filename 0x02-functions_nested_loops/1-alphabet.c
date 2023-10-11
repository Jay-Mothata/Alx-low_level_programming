#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: Prints alphabets in lowercase using only '_putchar'
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

