#include <stdio.h>
#include <stdlib.h>

/**
 * isInt - checks if s is an integer
 * @s: string to validate
 * Return: 0 (Success)
 * otherwise: Always 1.
 */

int isInt(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

/**
 * main - prints the minimum number of coins to make change for an money
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0. (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	
	while (--argc)
	{
		if (isInt(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}
