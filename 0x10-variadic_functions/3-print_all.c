#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything
 * @format: A list of types of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	char *sep = "";
	unsigned int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				continue;
		}
		sep = ", ";
	}

	printf("\n");
	va_end(args);
}
