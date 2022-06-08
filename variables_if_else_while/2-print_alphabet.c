#include <stdio.h>
/**
 * main - Prints the alphabet in lower case followed
 *        by a new line.
 * Return: should be 0.
 */
int main(void)
{
	char lc;/* Declaring Data Type "char" as lc */

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);
	putchar('\n');
	return (0);
}
