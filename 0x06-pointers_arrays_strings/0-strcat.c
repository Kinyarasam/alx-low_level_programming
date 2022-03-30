#include "main.h"

/**
 * _strcat - copy src string ontop of dest
 * @src: Char[] to append to dest
 * @dest: Char[] to be appended to
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int a = -1, i;
	for (i = 0; dest[i] != '\0'; i++);

	do {
		a++;
		dest[i] = src[a];
		i++;
	} 
	while (src[a] != '\0');

	return (dest);
}
