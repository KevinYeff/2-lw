#include "main.h"

/**
 * print_numbers - Function that prints the numbers from 0 to 9.
 *
 * Return: Should be 0.
 *
 */

void print_numbers(void)
{
	int h;

	for (h = '0'; h <= '9'; h++)
	{
		_putchar(h);
	}
	_putchar('\n');
}
