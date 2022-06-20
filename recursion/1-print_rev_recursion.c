#include "main.h"

/**
 * _print_rev_recursion - Prints a strinjg in reverse using
 *                        recursion.
 *
 * @s: String.
 */

void _print_rev_recursion(char *s)
{
	int h;

	h = 0;

	if (s[h] != '\0')
	{
		_print_rev_recursion(&(s[h + 1]));
		 _putchar(s[h]);
	}
}
