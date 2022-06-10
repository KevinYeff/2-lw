#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lower
 *                      case followed by a new line.
 */
void print_alphabet_x10(void)
{
	char al;
	int c = 1;

	while (c <= 10)
	{
		al = 97;
		while (al <= 122)
		{
			_putchar(al);
			al++;
		}
		_putchar(10);
		c++;
	}
}
