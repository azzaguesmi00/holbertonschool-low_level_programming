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

	for (i = 0; i < size; i++)
	{
		if (array[i] == cmp)
		{
			return (i);
		}
	}
	return (-1);
}
