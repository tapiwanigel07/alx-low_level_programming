#include "main.h"

/**
 * is_prime_number - check if prime
 * @n: number check
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int advisor = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (is_prime(n, divisor));
}
