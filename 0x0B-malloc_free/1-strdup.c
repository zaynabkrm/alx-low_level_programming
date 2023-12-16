#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *A;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	A = malloc(sizeof(char) * (i + 1));

	if (A == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		A[r] = str[r];

	return (A);
}
