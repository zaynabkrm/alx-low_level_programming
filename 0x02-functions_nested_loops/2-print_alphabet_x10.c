#include "main.h"

/**
 * print_alphabet_x10 - print alpha 10 time
 * print alphabet ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (al = 'a'; al <= 'z'; al++)
			_putchar(al);
		_putchar('\n');
	}
}
