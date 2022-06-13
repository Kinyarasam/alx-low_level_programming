#include "main.h"

/**
 * _strstr - description
 * @haystack: string
 * @needle: pointer
 *
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack[j] != needle[j - i])
			break;

		if (needle[j - i] == '\0')
			return (haystack + i);
	}
	return (0);
}
