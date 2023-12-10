#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog- check the code
 * @d: pointer
 * Return: 0 or null
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
