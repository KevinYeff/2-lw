#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints a text according to a random number.
 * Return: Should be 0.
 */
int main(void)
{
	int n, ladi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ladi = n % 10;
	if (ladi > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ladi);
	}
	else if (ladi < 6 && ladi != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ladi);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, ladi);
	}
	return (0);
}
