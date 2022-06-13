#include "main.h"

/**
 * _puts - prints the entire string s
 * @s: string to be printed
 *
 * Return: nothing
 */
void _puts(char *s)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}

	_putchar('\n');
}
