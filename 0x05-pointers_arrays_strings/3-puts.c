#include "main.h"

/**
 * _puts - function that prints a string, followed by new line to stdout.
 *
 * @str: input string to print
 *
 */

void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}

