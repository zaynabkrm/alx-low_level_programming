#include "main.h"

/**
 * _strcat -  concatenates two strings
 * @dest: a pointer to the string to be concatenated upon
 * @src: the source string to be appended to @dest
 *
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
