#include "main.h"

/**
 * sqrt_helper - a helper function that finds the natural square root.
 * @n: The number to find the square root of.
 * @i: The current divisor to check.
 * Return: The natural square root of a number.
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 * Return: The natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(n, 0));
}
