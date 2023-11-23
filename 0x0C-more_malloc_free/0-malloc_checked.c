#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *@b: the amount of memory to allocate
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}

	return (m);
}
