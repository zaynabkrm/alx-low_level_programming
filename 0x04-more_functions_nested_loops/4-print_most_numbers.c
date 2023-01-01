#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers, from 0 to 9 -{2,4}
 *
 * Return:0
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if ((i ==2) || (i ==4))
		{
			break;
		}
		i++;
		_putchar(i);
	}

putchar('\n');
}

