#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	/* Iterate over each argument */
	for (i = 1; i < argc; i++)
	{
		/* Iterate over each character in the argument */
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/* If the character is not a digit, print error and return 1 */
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		/* Add the integer value of the argument to the sum */
		sum += atoi(argv[i]);
	}

	/* Print the sum */
	printf("%d\n", sum);

	return (0);
}
