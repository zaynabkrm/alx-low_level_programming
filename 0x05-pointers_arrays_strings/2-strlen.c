#include "main.h"

/**
 * _strlen - returns a length of a string
 * @s: char to check
 * Return:0
 */

int _strlen(char *s);
{
	int a = 0; /* Start the counter from 0*/

	for (; *s++;)
		a++;
	return (a);
}
