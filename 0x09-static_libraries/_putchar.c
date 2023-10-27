#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * Description: Prints character
 *
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
