#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * prints the numbers from 0 to 9
 * Return:0
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
}
