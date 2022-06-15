#include <stdio.h>

/**
 * main - Program that prints from 1 to 100 followed by
 *        a new line,  But for multiples of three print Fizz
 *        for the multiples of five print Buzz,
 *        For numbers which are multiples of both three and
 *        five print FizzBuzz.
 *
 * Return: Should be 0.
 */

int main(void)
{
	int h;

	for (h = 1; h <= 100; h++)
	{
		if (h % 15 == 0)
		{
			printf("FizzBuzz");
		}

		else if (h % 5 == 0)
		{
			printf("Buzz");
		}
		else if (h % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", h);
		}

		if (h < 100)
		{
			printf(" ");
		}
	}
	printf(" ");
	return (0);
}
