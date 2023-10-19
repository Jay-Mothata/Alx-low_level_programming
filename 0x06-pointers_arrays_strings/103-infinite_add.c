#include "main.h"

/**
 * infinite_add - Adds two numbers stored in strings
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer r
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n, carry = 0;

	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;

	if (i > size_r || j > size_r)
		return (0);

	i--;
	j--;

	for (k = 0; k < size_r - 1; k++, i--, j--)
	{
		l = i < 0 ? 0 : n1[i] - '0';
		m = j < 0 ? 0 : n2[j] - '0';
		n = l + m + carry;

		if (n > 9)
		{
			r[k] = (n % 10) + '0';
			carry = 1;
		}
		else
		{
			r[k] = n + '0';
			carry = 0;
		}
	}

	if (carry == 1)
	{
		if (k < size_r - 1)
			r[k] = 1 + '0';
		else
			return (0);
	}
	r[k] = '\0';

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];
		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
