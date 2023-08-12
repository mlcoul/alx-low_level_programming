#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that print all possible combinations of a single digit number
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);

		if (a == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
