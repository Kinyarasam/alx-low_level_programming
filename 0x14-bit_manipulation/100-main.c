#include <stdio.h>
#include "main.h"

/**
 * main -
 *
 * Return: -
 */
int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
		printf("Little Endian\n");
	printf("Big Endian\n");
	return (0);
}
