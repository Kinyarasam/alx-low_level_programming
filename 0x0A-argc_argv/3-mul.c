#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: arguement count
 * @argv: arguement vector
 * Return: Always 1 (Fail)
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if(argc == 3)
	{
		printf("%d\n", atoi(argv[1] * argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
