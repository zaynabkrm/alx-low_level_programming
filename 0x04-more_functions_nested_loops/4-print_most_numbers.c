#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9 -{2,4}
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		_putchar(i);
	}
	_putchar(10);
}

