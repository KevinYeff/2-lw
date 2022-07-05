#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function that prints strings, followed by anew line.
 *
 * @separator: Separator between strings.
 * @n: Number of strings passed to the function.
 * @...: Strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *psrt;
	unsigned int i;
	va_list nstrings;

	va_start(nstrings, n);
	for (i = 0; i < n; i++)
	{
		psrt = va_arg(nstrings, char *);

		if (psrt == NULL)
			printf("(nil)");
		else
			printf("%s", psrt);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(nstrings);
	printf("\n");
}
