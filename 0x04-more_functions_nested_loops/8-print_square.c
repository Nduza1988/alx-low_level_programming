#include "main.h"

/**
 * print_sqaure - prints a square, followed by new line
 * @size: parameter
 * Return: returns nothing
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = ; i < size; i++)
		{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
}
