#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array- check the code
 * @size: unsigned int
 * @c: char
 * Return: 0 or null
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * size);
	if (s == 0)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < size; x++)
			s[x] = c;
	}
	return (s);
}
