#include <stdio.h>
/**
 * main - Prints the alphabet excep "q" and "e".
 * Return: should be 0.
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
		putchar(a);
		}
	}
	putchar('\n');

	return (0);
}
