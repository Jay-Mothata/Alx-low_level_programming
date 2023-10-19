#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @s: The string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = s[i] + 13;
		}
		else if ((s[i] > 'm' && s[i] <= 'z') || (s[i] > 'M' && s[i] <= 'Z'))
		{
			s[i] = s[i] - 13;
		}
		i++;
	}

	return (s);
}
