#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - returns the lengthof a string
 * @s: string s
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		s++;
		length++;
	}
	return (length);
}

/**
 * _strdup - return a newly allocated space in memory,
 * which contains a copy of the given string as a parameter
 * @str: string to be copied.
 *
 * Return: copied string.
 */
char *_strdup(char *str)
{
	char *copy, *_copy;

	if (!str)
		return (NULL);
	copy = malloc((_strlen(str) + 1) * sizeof(char));
	/* Incase there is insufficient memory */
	if (!copy)
		return (NULL);
	_copy = copy;

	while (*str)
	{
		*_copy = *str;
		str++;
		_copy++;
	}
	*_copy = '\0';
	return (copy);
}
