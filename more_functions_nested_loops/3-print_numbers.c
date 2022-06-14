#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function that prints the numbers from 0 to 9.
 *
 * @h: the int to be displayed.
 *
 * Return: Should be 0.
 */

void print_numbers(void)
{
	int h = 0;

	for (; h <= 9; h++)
	{
		_putchar(h + '0');
	}
	_putchar(10);
}
