#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 *
 * @n: Number of times the character _ should be printed.
 * Return: Should be 0.
 */

void print_line(int n)
{
	int h;

	for (h = 0; h < n; h++)
	{
		_putchar(95);
	}
	_putchar(10);
}
