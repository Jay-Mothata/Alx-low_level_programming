#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-' || s[i] == '+')
	{
		sign = 1 - 2 * (s[i++] == '-');
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (num > 214748364 || (num == 214748364 && s[i] - '0' > 7))
		{
			return (sign == 1 ? 2147483647 : -2147483648);
		}
	}
		num = num * 10 + (s[i++] - '0');
	}

	return (sign * num);
}
