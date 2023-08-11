#include <stdlib.h>
#include <stdio.h>

/**
 * main - Function that print alphabet using putchar
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
