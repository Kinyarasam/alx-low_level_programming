#include "main.h"

/**
 * powX - raises base to power
 * @base: base number
 * @power: power
 *
 * Return: base the power of power
 */
int powX(int base, int power)
{
	if (power < 0)
		return (-1);

	else if (power == 1)
		return (base);
	else if (power == 0)
		return (1);

	return (base * powX(base, power - 1));
}

/**
 * _len - length of string
 * @s: string
 *
 * Return: string lenth
 */
int _len(const char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer
 *
 * Return: converted number
 * otherwise 0.
 */
unsigned int binary_to_uint(const char *b)
{
	uint num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = num * 2 + (*b++ - 48);
	}
	return (num);
}
