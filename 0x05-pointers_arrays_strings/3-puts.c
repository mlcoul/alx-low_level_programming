#include "main.h"
#include <unistd.h>


/**
 * _puts - function that print a string
 *@str: string to be return
 *Return: a string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0 ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
