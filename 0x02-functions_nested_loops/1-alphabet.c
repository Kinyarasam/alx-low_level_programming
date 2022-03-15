#include "main.h"
#include "string.h"
/**
 * print_alphabet - print entire alphabet
 *
 * Return: Void.
 */

void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
