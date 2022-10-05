#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: arguments
 * @argv: array of pointing to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
