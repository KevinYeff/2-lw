#include "main.h"

/**
 * _puts - Prits a string, followed by a new line.
 *
 *@str: String that should be printed.
 *
 */

void _puts(char *str)
{
	for (; *str != '\0' ; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
