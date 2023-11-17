#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x, y, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = strtol(argv[1], NULL, 10);
	y = strtol(argv[2], NULL, 10);
	result = x * y;
	printf("%d\n", result);

	return (0);
}
