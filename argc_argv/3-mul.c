#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers.
 *
 * @argc: Argument counter.
 * @argv: Argument vector.
 *
 * Return: If does not recieve 2 arguments returns Error and 1.
 */

int main(int argc, char *argv[])
{
	int h, k, result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	h = atoi(argv[1]);
	k = atoi(argv[2]);

	result = h * k;
	printf("%d\n", result);

	return (0);
}
