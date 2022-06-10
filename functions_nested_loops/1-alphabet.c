#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lower case
 *        followed by a new line.
 */
void print_alphabet(void)
{
	char al = 97;/*alphabet in lower case*/

	while (al <= 122)
	{
		_putchar(al);
		al++;
	}
	_putchar(10);
}
