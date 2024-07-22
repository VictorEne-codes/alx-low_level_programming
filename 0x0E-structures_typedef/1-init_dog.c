#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function to initializa struct dog
 * @d: member
 * @name: member
 * @age: member
 * @owner: member
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
