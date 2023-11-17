#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum number of coins to make change for an amount of money
 * @argc: number of commandline arguments.
 * @argv: pointer to an array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, count = 0, cents;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && cents >= 0; i++)
	{
		while (cents >= coin[i])
		{
			count++;
			cents -= coin[i];
		}
	}

	printf("%d\n", count);
	return (0);
}
