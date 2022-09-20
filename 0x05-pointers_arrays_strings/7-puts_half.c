#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the-string - 1) / 2
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int n, m, len;

	len = 0;

	for (n = 0; str[n] != '\0'; n++)
		len++;

	m = (len / 2);

	if ((len % 2) == 1)
		n = ((len + 1) / 2);

	for (m =  n; str[m] != '\0'; m++)
		_putchar(str[n]);
	_putchar('\n');
}
