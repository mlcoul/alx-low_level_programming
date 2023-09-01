#include "main.h"
#include <stdio.h>
#include <stdint.h>

/**
 * main - Prints its name
 * @argc: num of agr passed to the function
 * @argv: and array of string
 * Return: 0
 */

int main (int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);

}
