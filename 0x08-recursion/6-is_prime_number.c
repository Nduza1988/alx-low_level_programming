#include "main.h"

/**
 * primeFinder - searches for if a number is a prime number
 * @a: the number to check
 * @b: the numbers we'll got through
 * Return: whether or not the number is a prime number
 */

int is_prime_number(int n)
{
	if (a <= 1 || a % b == 0)
		return (0);

	else if (a == b)
		return (1);

	else if (a > b)
		primeFinder(a, b + 1);

	return (1);
}

/**
 * is_prime_number - tells us if an integer is a prime number or not
 * @n: the number to check
 * Return: 0 if the number is not prime, and 1 if it is
 */

int is_prime_number(int n)
{
	return (primeFinder(n, 2));
}
