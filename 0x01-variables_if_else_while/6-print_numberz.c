#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function that print digit
 *
 * Return: 0
 */
int main(void)
{
	int  a = 0;

	while (a < 10)
	{
		putchar(a + 48);
		a++;
	}
	putchar('\n');
	return (0);
}
