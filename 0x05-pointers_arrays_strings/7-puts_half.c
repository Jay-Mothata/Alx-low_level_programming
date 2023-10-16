#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2 + 1;
	}

	for (; n < len; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
