#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: bytes
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (dest_ptr);
}
