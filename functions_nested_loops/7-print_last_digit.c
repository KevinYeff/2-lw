#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @h: Will be th int to be tested.
 *
 * Return: Will be the last digit.
 */
int print_last_digit(int h)
{
	int i;

	if (h < 0)
		h = -1;

	i = h % 10;

	if (i < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
