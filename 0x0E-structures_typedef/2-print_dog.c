#include <stdlib.h>
#include "dog.h"
/**
 * print_dog -  prints a struct dog
 * @d: dog to print
 *
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	print("Name:%s\n Age:%f\n Owner: %s\n", d->name, d->age, d->owner);
}
