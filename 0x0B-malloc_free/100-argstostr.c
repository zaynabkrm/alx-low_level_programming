#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: the first argument
 * @av: the second argument
 *
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *new_str;

	len = 1;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}
	new_str = (char *)malloc(len * sizeof(char));
	if (new_str == NULL)
	{
		return (NULL);
	}
	new_str[0] = '\0';

	for (j = 0; j < ac; j++)
	{
		strcat(new_str, av[j]);
		strcat(new_str, "\n");
	}

	return (new_str);
}
