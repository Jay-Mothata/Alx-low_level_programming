#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers passed as arguments
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	/* Check if exactly two arguments are passed*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert arguments to integers*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Calculate product*/
	product = num1 * num2;

	/* Print product*/
	printf("%d\n", product);

	return (0);
}
