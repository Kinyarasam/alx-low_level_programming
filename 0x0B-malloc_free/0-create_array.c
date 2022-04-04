#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars and initializes it with a special char.
 * @size: size of the array.
 * @c: char to fill the array with.
 *
 * Return: Strings of char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (!size || !ptr)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
