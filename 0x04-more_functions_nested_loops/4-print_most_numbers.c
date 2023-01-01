#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9 -{2,4}
 *
 * Return:0
 */
void print_most_numbers(void)
{
	int i;

	while (i < 10 && i != 4 && i != 2)
	{
		i++;
		putchar(i + '0');
	}

putchar('\n');
}

