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
	char ch = "a";

	while (ch <= "z")
	{
		putchar(ch);
		ch+;
	}
	putchar("\n");
	return (0);
}
