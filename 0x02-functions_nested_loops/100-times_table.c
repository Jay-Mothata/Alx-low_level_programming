#include "main.h"

/**
 * print_times_table - Entry point
 *
 * Description: prints the n times table, starting with 0
 *@n: Number
 *
 * Return: 0
 */

void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j != n)
				{
					/*print the multiplication result and a comma */
					printf("%d, ", i * j);
				}
				else
					/*print the multiplecation result and a newline */
					printf("%d\n"i * j);
			}
		}
	}
}
