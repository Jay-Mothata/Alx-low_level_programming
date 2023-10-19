#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13
 * @s: The string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	char data1[100];
	char datarot[100];

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
		data1[j] = s[i];
		i++;
		j++;
	}
	data1[j] = '\0';

	for (i = 0; data1[i] != '\0'; i++)
	{
		datarot[i] = data1[i];
	}
	datarot[i] = '\0';

	return (datarot);
}
