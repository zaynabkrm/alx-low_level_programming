#include "variadic_functions.h"

/**
 * print_numbers -prints numbers, followed by a new line.
 * @n:  the number of integers passed to the function
 * @separator: the string to be printed between numbers.
 * @...: the integers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...);
{
	unsigned int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int), i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
