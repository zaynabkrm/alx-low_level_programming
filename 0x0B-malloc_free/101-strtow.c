#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * is_space - check if a character is a whitespace character
 * @c: the character
 * Return: 1 if the c is a whitespace character and 0 otherwise
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_wrd - Word count
 * @str: the string
 * Return: number of words
 */
int count_wrds(char *str)
{
	int count = 0;
	int in_wrd = 0;

	while (*str)
	{
		if (is_space(*str))
		{
			in_wrd = 0;
		}
		else if (in_wrd == 0)
		{
			count++;
			in_wrd = 1;
		}
		str++;
	}
	return (count);
}

/**
 * duplicate_wrd - duplicate string
 * @str: the string
 * Return: pointer
 */
char *duplicate_wrd(char *str)
{
	char *wrd;
	int len, i;

	len = 0;
	while (str[len] && !is_space(str[len]))
	{
		len++;
	}

	wrd = (char *)malloc(sizeof(char) * (len + 1));
	if (wrd == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		wrd[i] = str[i];
	}
	wrd[len] = '\0';

	return (wrd);
}

/**
 * strtow - splits a string into words
 * @str: the string
 * Return: pointer
 */
char **strtow(char *str)
{
	int wrd_i, in_wrd, num_wrds, i;
	char **wrd_array;

	wrd_i = 0;
	in_wrd = 0;
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	num_wrds = count_wrds(str);
	wrd_array = (char **)malloc(sizeof(char *) * (num_wrds + 1));
	if (wrd_array == NULL)
	{
		return (NULL);
	}
	while (*str)
	{
		if (is_space(*str))
			in_wrd = 0;
		else if (in_wrd == 0)
		{
			wrd_array[wrd_i++] = duplicate_wrd(str);
			if (wrd_array[wrd_i - 1] == NULL)
			{
				for (i = 0; i < wrd_i - 1; i++)
					free(wrd_array[i]);
				free(wrd_array);
				return (NULL);
			}
			in_wrd = 1;
		}
		str++;
	}
	wrd_array[num_wrds] = NULL;
	if (num_wrds == 0)
		return (NULL);
	else
		return (wrd_array);
}
