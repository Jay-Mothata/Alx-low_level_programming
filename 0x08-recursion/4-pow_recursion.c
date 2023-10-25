#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 * Return: The value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	/* If the exponent is lower than 0, return -1*/
	if (y < 0)
	{
		return (-1);
	}
	/* If the exponent is 0, return 1*/
	if (y == 0)
	{
		return (1);
	}
	/* Recursively call _pow_recursion*/
		return (x * _pow_recursion(x, y - 1));
}
