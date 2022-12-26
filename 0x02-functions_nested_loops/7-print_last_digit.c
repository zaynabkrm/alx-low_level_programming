#include "main.h"

/**
 * print_last_digit - Print the last digit
 * @n: number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int r = n % 10;

	if (r < 0)
		r *= -1;

	_putchar('0' + r);

	return(r);
}
