#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to be modified
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *s)
{
	int index = 0;

	/* Capitalize the first character of the string */
	if (s[index] >= 'a' && s[index] <= 'z')
	{
		s[index] = s[index] - ('a' - 'A');
	}

	/* Iterate over the rest of the string */
	while (s[index] != '\0')
	{
		/* Check if the character is a letter and is preceded by a separator */
		if ((s[index] >= 'a' && s[index] <= 'z') &&
			(s[index - 1] == ' ' || s[index - 1] == '\t' ||
			 s[index - 1] == '\n' || s[index - 1] == ',' ||
			 s[index - 1] == ';' || s[index - 1] == '.' ||
			 s[index - 1] == '!' || s[index - 1] == '?' ||
			 s[index - 1] == '"' || s[index - 1] == '(' ||
			 s[index - 1] == ')' || s[index - 1] == '{' ||
			 s[index - 1] == '}'))
		{
			s[index] = s[index] - ('a' - 'A');
		}
		index++;
	}

	return (s);
}

