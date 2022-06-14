#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 *
 * @size: Is the size of the square.
 *
 */

void print_square(int size)
{
	int h, k;

	if (size <= 0)
	{
		_putchar(10);
	}

	for (h = 0; h < size; h++)
	{
		for (k = 0; k < size; k++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}
