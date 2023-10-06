#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: always 0 on success
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
