#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 * Return: (0).
 */
int main(void)
{
	int n, n2, c = 0;

	for (n = '0'; n <= '9'; n++)
	{
		for (n2 = n + 1; n2 <= '9'; n2++, c++)
		{
			if (n != 0)
			{
				putchar(n);
				putchar(n2);
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
