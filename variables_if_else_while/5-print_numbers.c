#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        followed by a ney line.
 * Resturn: Should be 0.
 */

int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
