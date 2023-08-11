#include <stdlib.h>
#include <stdio.h>

/**
 * main - Function that print alphabet in lowercase and uppercase using putchar
 *
 * Return: 0
 */
int main(void)
{
	int a, b;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}

	for (b = 65; b <= 90; b++)
	{
		putchar(b);
	}

	putchar('\n');
	return (0);
}
