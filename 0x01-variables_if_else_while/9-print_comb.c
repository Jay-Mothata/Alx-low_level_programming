#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int rints all possible combinations of single-digit numbers.i;

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
			printf(i + '0')
		else
		{	putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
