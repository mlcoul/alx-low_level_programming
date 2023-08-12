#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that print all the number of a base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}

	for (b = 97; b <= 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
