#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Description: Checks if it is an alphabetic character
 * @c: character
 *
 * Return: 1 if letter, else 0
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
