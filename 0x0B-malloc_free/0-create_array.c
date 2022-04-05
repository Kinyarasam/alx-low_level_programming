#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars, 
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char to fill array with
 *
 * Return: string of chars
 */

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);
	if (size == 0 || m == 0)
		return (0);

	while (size--)
		m[size] = c;

	return (m);
}