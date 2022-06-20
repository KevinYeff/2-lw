#include "main.h"

/**
 * _puts_recursion - Function that prints a string,
 *                    followed by a new line.
 *
 * @s: String.
 *
 */

void _puts_recursion(char *s)
{
	int h;

	h = 0;

	if (s[h] != '\0')
	{
		_putchar(s[h]);
		_puts_recursion(&(s[h + 1]));
	}
	else
	{
		_putchar(10);
	}
}
