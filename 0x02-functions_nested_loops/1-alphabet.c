#include "main.h"

/**
 * print_alphabet - print Alphabet
 * Write a function that prints the alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	char al;

	for (al = "a"; al <= "z"; al++)
		_putchar(al);
	_putchar('\n');
}
