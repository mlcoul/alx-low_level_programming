#include "main.h"

/**
 * _islower -Check for lowercase char
 * @c: the char to be checked
 * Return: 1 for Sucess and 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
