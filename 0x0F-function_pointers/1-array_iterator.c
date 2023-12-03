#include "function_pointers.h"
#include <string.h>
#include <stddef.h>

/**
 * array_iterator - executes a function
 * @array: the array
 * @size: the size of the array
 * @action: pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
