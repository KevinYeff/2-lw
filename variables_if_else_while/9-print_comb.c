#include <stdio.h>

/**
 * main - Prints all the possible combinations of a
 *        single-digit numbers.
 * Return: Should be 0.
 */
/* Data Type "char" is not allowed*/
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
