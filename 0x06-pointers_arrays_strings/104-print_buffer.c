#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer in a specific format
 * @b: The buffer to be printed
 * @size: The size of the buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i = 0;
	int j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	while (i < size)
	{
		printf("%08x: ");

		for (j = 0; j < 10 && i + j < size; j++)
		{
			printf("%02x", b[i + j]);
			if (j % 2)
				printf(" ");
		}

		while (j < 10)
		{
			printf("  ");
			if (j % 2)
				printf(" ");
			j++;
		}

		for (j = 0; j < 10 && i + j < size; j++)
		{
			if (b[i + j] < 32 || b[i + j] > 126)
				printf(".");
			else
				printf("%c", b[i + j]);
		}

		printf("\n");

		i += 10;
	}
}
