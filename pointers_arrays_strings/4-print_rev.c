#include "main.h"
#include <string.h>
/**
 * print_rev - Fuctions that prints a string in reverse,
 *             followed by a new line.
 *
 *@s: String that shold be printed in reverse.
 */

void print_rev(char *s)
{
	int h, k;

	k = strlen(s);
/* strlen() calculates the length of the string pointed to*/
	for (h = k - 1; h >= 0; h--)
	{
		_putchar(s[h]);
	}
	_putchar(10);
}
