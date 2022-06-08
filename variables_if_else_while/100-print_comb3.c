#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 * Return: (0).
 */
int main(void)
{
	int n, n2;

	for (n = '0'; n <= '9'; n++)
	{
		for (n2 = n + 1; n2 <= '9'; n2++)
		{
			if (n <= n2)
			{
				putchar(n);
				putchar(n2);
				if (n != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
