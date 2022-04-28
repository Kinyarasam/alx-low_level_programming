#include "main.h"

/**
 * clear-bit - sets the value to 0 at a given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 *
 * Return: Always 1.(Success)
 * otherwise: -1.
 */
int clear_bit(unsigned long int*n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
