#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at any given point
 * @n: pointer to an unsigned long int
 * @index: index of the bit
 *
 * Return: 1 on Success,
 * otherwise: -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 63)
	{
		*n = *n | (1 << index);
		return (1);
	}else{
		return (-1);
	}
}
