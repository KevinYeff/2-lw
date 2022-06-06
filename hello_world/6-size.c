/*
 *void is a good practice.
 *printf() function prints a string on the screen using a “format string”
that includes the instructions to mix several strings
and produce the final string to be printed on the screen.
*sizeof operator computes the size of a variable. And,
to print the result returned by sizeof,
we use either %lu or %zu format specifier.
*/

#include <stdio.h>

/**
 * main - prints the size of various types on the computer
 * it is compiled and run on.
 * Return: (0).
 */
int main(void)
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));

return (0);
}
