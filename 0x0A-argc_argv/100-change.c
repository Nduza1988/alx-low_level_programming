#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int change(int cents);

/**
 * main - entry point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("%s\n", "Error");
			return (1);
	}
	else if (argv < 0)
	{
		return (0);
	}

	printf("%d\n", change(atoi(argv[1])));
	return (0);
}

/**
 * change - get change
 * @cents: amount of coins from main function
 * Return: change
 */

int change(int cent)
{
	int q = 25, d = 10, n = 5, t = 2, p = 1;
	int coins;

	while (cent > 0)
	{
		while (cent >= q)
		{
			cent -= q;
			coins++;
		}
		while (cent >= d)
		{
			cent -= d;
			coins++;
		}
		while (cent >= n)
		{
			cent -= n;
			coins++;
		}
		while (cent >= t)
		{
			cent -= t;
			coins++;
		}
		while (cent >= p)
		{
			cent -= p;
			coins++;
		}
	}
	return (coins);
}


