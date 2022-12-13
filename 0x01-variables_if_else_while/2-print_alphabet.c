#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - return Alphabets
 *
 * Return: 0
 */
int main(void)
{
	int ch = "a";

	while (ch <= "Z")
	{
		putchar(ch);
		ch++
	}
	putchar("\n");
	return (0);
}
