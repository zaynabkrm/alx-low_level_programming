#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\n')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\n')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
