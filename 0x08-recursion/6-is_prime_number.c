#include "main.h"

/**
 * isPrime - helper function for is_prime_number
 * @n: input number
 * @i: iterator
 * Return: 1 on Success
 * Return: 0 on fail
 */
int isPrime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (isPrime(n, i -1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise; return 0
 * @n: input number
 * Return: 1 if success.
 * Return: 0 on failure.
 */
int is_prime_number(int n)
{
	if (n < 3)
		return (0);
	return (isPrime(n, n - 1));
}
