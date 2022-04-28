#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: Always 0. (Big endian)
 * otherwise: 1 (little endian)
 */
int get_endianness(void)
{
	unsigned int count = 1;
	char *c = (char *) &count;
	
	return (*c + '0');
	/*
	if (*c)
		return (1);
	else
		return (0);
		*/
}
