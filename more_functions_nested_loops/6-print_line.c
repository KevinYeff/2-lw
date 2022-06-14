#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 *
 * @n: Number of times the character _ should be printed.
 * Return: Should be 0.
 */

void print_line(int n)
{
	for (n = n; n <= 10; n++)
	{
		_putchar(95);
	}
	_putchar(10);
}
