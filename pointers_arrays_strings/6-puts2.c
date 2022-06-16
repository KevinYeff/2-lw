#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character of a string,
 *         starting with the first character, followed by
 *         a neww line.
 *
 * @str: String.
 */

void puts2(char *str)
{
	int len, h;

	len = strlen(str);

	for (h = 0; h < len; h += 2)
	{
		_putchar(str[h]);
	}
	_putchar(10);
}
