#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that print alphabet in reverve
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 122; a >= 97; a--)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
