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
	if (h < 0)
	{
		h = h * -1;
	}
	_putchar((h % 10) + '0');
	return (h % 10);
}
