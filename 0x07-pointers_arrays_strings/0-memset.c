#include "main.h"
/**
 * _memset - Filles the first n bytes of the memory area
 * @s: Pointer to the memory area
 * @c: Character to fill the memory area with.
 * @n: Number of bytes
 * descripton
 * Return: A pointer
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (i = 0; i < n; i++)
		memory[i] = value;
	return (memory);
}
