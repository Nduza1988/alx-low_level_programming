#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: input string
 * Return: length of strength
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	return (index);
}
