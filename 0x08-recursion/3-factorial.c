#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial of.
 * Return: The factorial of n
 */
int factorial(int n)
{
	/* If the number is lower than 0, return -1*/
	if (n < 0)
	{
		return (-1);
	}
	/* If the number is 0, return 1*/
	if (n == 0)
	{
		return (1);
	}

	/* Recursively call factorial*/
		return (n * factorial(n - 1));
}
