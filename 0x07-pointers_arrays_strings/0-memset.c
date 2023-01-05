#include "main.h"
/**
 * _memset - Filles the first n bytes of the memory area
 * @s: source string
 * @b: constant byte for filling
 * @n: lenght of buffer
 * descripton
 * Return: A pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
