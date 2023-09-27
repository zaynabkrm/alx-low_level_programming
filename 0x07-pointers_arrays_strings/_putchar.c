#include "main.h"
#include <unistd.h>
/**
 * _putchar -write the character c to stdout
 * @c: the character to print
 * description for putchar file
 * Return: 0n succes 1
 * on error, -1 is returned, and is set appropriatly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
