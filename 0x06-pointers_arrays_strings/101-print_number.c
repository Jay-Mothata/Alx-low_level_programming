#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	unsigned int m, last_digit;

	if (n < 0)
	{
		_putchar('-');
		if (n == INT_MIN)
		{
			m = INT_MAX;
			last_digit = 8;
			_putchar('1');
		}
		else
		{
			m = -n;
			last_digit = 0;
		}
	}
	else
	{
		m = n;
		last_digit = 0;
	}

	if (m / 10)
		print_number(m / 10);
	_putchar((m % 10 - last_digit) + '0');
}
