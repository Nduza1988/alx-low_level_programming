#include "main.h"

/**
 * _islower.c - write a function that checks lowercase character.
 *
 * @c: Is the int that will use for argument of function.
 * Return: 0
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
