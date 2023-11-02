#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digits - checks if a string is composed of digits
 * @s: string to check
 *
 * Return: 1 if s is composed of digits, 0 otherwise
 */
int is_digits(char *s)
{
	for (; *s; s++)
		if (!isdigit(*s))
			return (0);
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	/* Check number of arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	/* Check if arguments are composed of digits */
	if (!is_digits(argv[1]) || !is_digits(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	/* Convert arguments to integers and multiply them */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	/* Print the result */
	printf("%d\n", product);

	return (0);
}
