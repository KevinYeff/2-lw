#include "main.h"

/**
 * times_table - Prints the 9 times table,
 *               starting with 0.
 *
 */
void times_table(void)
{
	int n, f, r;

	for (n = 0; n <= 9; n++)
	{
		for (f = 0; f <= 9; f++)
		{
			r = n * f;
			if (f == 0)
			{
				_putchar(r + '0');
			}
			else if (r >= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			else if (r <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + '0');
			}
		}
		_putchar(10);
	}
}
