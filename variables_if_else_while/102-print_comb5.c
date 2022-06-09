#include <stdio.h>

/**
 * main - Prints all the possible combinations of two two-digit numbers.
 * Return: Shoul be 0.
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 98; n1 ++)
	{
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			putchar((n1 / 10) + 48);
			putchar((n1 % 10) + 48);
			putchar(' ');
			putchar((n2 / 10) + 48);
			putchar((n2 % 10) + 48);
			if (n1 != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
