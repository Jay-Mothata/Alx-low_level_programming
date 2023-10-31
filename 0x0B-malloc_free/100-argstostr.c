#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: The arguments.
 *
 * Return: If ac == 0, av == NULL or the function fails - NULL.
 *         Otherwise - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, index, total_bytes = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of all the strings in av */
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			total_bytes++;
	}

	/* Allocate memory for the new string */
	str = malloc(sizeof(char) * (total_bytes + 1));
	if (str == NULL)
		return (NULL);

	/* Concatenate all the strings in av into the new string */
	index = 0;
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[index++] = av[arg][byte];

		str[index++] = '\n';
	}

	str[index] = '\0';

	/* Return the pointer to the new string */
	return (str);
}
