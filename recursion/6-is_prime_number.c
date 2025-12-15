#include "main.h"

/**
 * check_prime - checks if a number is prime recursively
 * @n: number to check
 * @divisor: current divisor
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (check_prime(n, divisor + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
