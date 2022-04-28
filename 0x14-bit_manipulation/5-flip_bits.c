#include "main.h"

/**
 * flip_bits- finds how many bits you need to switch for converting to m
 * @n: number to be checked
 * @m: desired number
 *
 * Return: number of bits you need to flip to get m from n
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	n = n ^ m;
	while (n)
	{
		if (n & 1)
			++count;
		n = n >> 1;
	}
	return (count);
}
