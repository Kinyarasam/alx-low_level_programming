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
	int i, mul = 1;
	
	if(argc == 3)
	{
		for(i = 1; i < argc; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
