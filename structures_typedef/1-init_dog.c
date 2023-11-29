#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog.
 * @name: char
 * @age: float
 * @owner: char
 * @d: struct
 * Return; 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	return (0);
}
