#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the last digit of the number stored in the variable n
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	x = n % 10; /* find the last digit */

	printf("Last digit of %d is %d", n, x);
	if (x > 5)
		printf(" and is greater than 5\n");
	else if (x == 0)
		printf(" and is 0\n");
	else
		printf(" and is less than 6 and not 0\n");
	return (0);
}
