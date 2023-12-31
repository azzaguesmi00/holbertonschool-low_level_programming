#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index- check the code
 * @array: array of integer
 * @size: int
 * @cmp: int
 * Return: 0 if false, something else otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array != NULL && cmp != NULL)
		for (i = 0; i < size; i++)
			if ((*cmp)(array[i]) == 1)
				return (i);
	return (-1);
}
