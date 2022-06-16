#include "main.h"
#include <string.h>

/**
 * puts_half - Fuction that prints half of a string,
 *             followed by a new line.
 *
 * @str: String.
 */

void puts_half(char *str)
{
	int len, h, k;

	len = strlen(str);

	if (len % 2 == 1)
	{
		h = len / 2 + 1;
	}
	else
	{
		h = len / 2;
	}
	for (k = h; k < len; k++)
	{
		_putchar(str[k]);
	}
	_putchar(10);
}
