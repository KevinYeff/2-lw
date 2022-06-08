#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lower case.
 * Return: Should be 0.
 */
int main(void)
{
	char n, a;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar ('\n');
	return (0);
}
