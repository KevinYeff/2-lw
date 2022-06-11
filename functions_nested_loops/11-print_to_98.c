#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers
 *               from n to 98, followed by a
 *               newline.
 * @n: The integer.
 *
 * Return: should be 0.
 */
void print_to_98(int n)
{
	for (n = n; n < 98; n++)
	{
		printf("%d, ", n);
	}
	for (n = n; n > 98; n--)
	{
		printf("%d, ", n);
	}
	printf("%d\n", n);
}
