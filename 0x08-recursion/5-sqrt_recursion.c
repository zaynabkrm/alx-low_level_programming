#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * Description: 'the program's description'
 * @n: number to find the square root of
 *
 * Return: square root
 */

int square_recursion(int n, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (square_recursion(n, 0));
}

/**
 * square_recursion - recurses to find square root
 * @n: number to find sqaure root
 * @i: iterator
 *
 * Return: square root
 */
int square_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (square_recursion(n, i + 1));
}
