#include "main.h"

/**
 * main - print Alphabet
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char al;
	
	for (al = 'a'; al <= 'z'; al++)
		_putchar(al);
	_putchar('\n');
}
