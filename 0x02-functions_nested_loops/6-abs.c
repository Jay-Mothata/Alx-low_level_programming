#include "main.h"

/**
 * _abs - Entry point
 *
 * Description: computes the absolute value of a number
 * @n: number
 *
 * Return: absolute value of @n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
