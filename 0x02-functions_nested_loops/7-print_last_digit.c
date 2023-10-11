#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: prints the last digit of a number
 * @n: number
 *
 * Return: return value of last digit
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = -1 * (n % 10);
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		lastDigit = n % 10;
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
