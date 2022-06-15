#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 *
 * @size: Size of the triangle.
 */

void print_triangle(int size)
{
	int h, k;

	if (size <= 0)
	{
		_putchar(10);
	}

	for (h = 1; h <= size; h++)
	{
		for (k = 1; k <= size; k++)
		{
			if (k <= (size - h))
			{
				_putchar(32);
			}
			else
			{
				_putchar(35);
			}
		}
		_putchar(10);
	}
}
