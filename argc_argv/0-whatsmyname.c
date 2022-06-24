#include <stdio.h>

/**
 * main - Prints its name followed by a new line.
 *
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: should be 0.
 */

int main(int argc, char *argv[])
{
	int h;

	for (h = 0; h < argc; h++)
	{
		printf("%s\n", argv[h]);
	}
	return (0);
}
