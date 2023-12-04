#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator- executes a function given as
 * a parameter on each element of an array.
 * @array: array of int
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 * Return : 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
