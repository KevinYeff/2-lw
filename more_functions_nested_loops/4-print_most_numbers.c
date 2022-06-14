#include "main.h"

/**
 * print_most_numbers - Function that prints numbers from 0 to 9,
 *                      followed by a new line.
 *                      Do not print 2 and 4.
 *
 * Return: should be 0.
 */

void print_most_numbers(void)
{
	int h;

	for (h = 0; h <= 9; h++)
	{
		if (h != 2 && h != 4)
		{
			_putchar(h + '0');
		}

	}
	_putchar('\n');
}
