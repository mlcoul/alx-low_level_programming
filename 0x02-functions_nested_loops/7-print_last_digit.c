#include "main.h"

/**
 * print_last_digit - print the last digit of an number
 * @n: number to be tested
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + 48);
	return (last_digit);
}
