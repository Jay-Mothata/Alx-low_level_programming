#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	/* Loop through each character in the string */
	while (s[i])
	{
		/* If the character is not a digit, return 0 */
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	/* If all characters are digits, return 1 */
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	/* Return the length of the string */
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	/* Print an error message and exit with status 98 */
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	/* Assign the command line arguments to s1 and s2 */
	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	/* Get the length of the strings */
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	/* Allocate memory for the result */
	result = malloc(sizeof(int) * len);
	/* If memory allocation fails, return 1 */
	if (!result)
		return (1);
	/* Initialize the result array with zeros */
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	/* Multiply the numbers and store the result */
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	/* Print the result */
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	/* Free the allocated memory */
	free(result);
	return (0);
}
