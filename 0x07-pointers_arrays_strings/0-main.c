#include "main.h"
#include <stdio.h>

/**
 * simple _print_buffer -prints buffer in hexa
 * @buffer :the address of memory
 * @size: the size of the memory
 *
 * Return: Nothing
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
	if (!(i % 10) && i)
	{
		printf("\n");
	}
	printf("0x%02x", buffer[i]);
	i++;
	}
	printf("\n");
}
