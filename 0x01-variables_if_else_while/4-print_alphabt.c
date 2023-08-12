#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that print alphabet except e and q
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a != 101 && a != 113)
			putchar(a);
	}

	putchar('\n');
	return (0);
}
