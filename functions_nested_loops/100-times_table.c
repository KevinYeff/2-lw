#include "main.h"
/**
 * print_times_table - Prints the n times table
 *                     starting with 0.
 *
 * @n: The integer to be used.
 */
void print_times_table(int n)
{
	int i, f, r;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (f = 1; f <= n; f++)
			{
				r = i * f;
				_putchar(',');
				_putchar(' ');
				if (r <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + r);
				}
				else if (r >= 10 && r <= 99)
				{
					_putchar(' ');
					_putchar('0' + (r / 10));
					_putchar('0' + (r % 10));
				}
				else if (r >= 100 && r <= 999)
				{
					_putchar('0' + (r / 100));
					_putchar('0' + (r /10) % 10);
					_putchar('0' + (r % 10));
				}
			}
			_putchar('\n');
		}
	}
}
