#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14,
 *                followed by a new line.
 *
 * Return: Should be 0.
 */

void more_numbers(void)
{
	int h = 0, k;

	while (h < 10)
	{
		k = 0;

		while (k < 15)
		{
			if (k > 9)
			{
				_putchar(k / 10 + '0');
			}
			_putchar(k % 10 + '0');
			k++;
		}
		_putchar('\n');
		h++;
	}
}
