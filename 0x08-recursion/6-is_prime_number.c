#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number
 * Return: 1 if the number is and 0 if not
 */

int is_prime_number(int n)
{
	int sum = 0;

	if ((n <= 0) || n == 1)
		return (0);
	sum = (n % 10) + is_prime_number(n / 10);

	if (((n % 10) % 2 == 0) && ((sum % 3) == 0))
		return (0);
	return (1);
}
