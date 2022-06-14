#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 *
 * @n: Number of times the character "\" should be printed.
 *
 */

void print_diagonal(int n)
{
	int h, k;

	if (n <= 0)
	{
		_putchar(10);
	}
	for (h = 0; h < n; h++)
	{
		for (k = 0; k < h; k++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
	}
}
