#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat- check the code
 * @s1: pointer char
 * @s2: pointer char
 * Return: 0 or null
 */
char *str_concat(char *s1, char *s2)
{
	int x1, x2;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	x1 = strlen(s1);
	x2 = strlen(s2);
	c = malloc(x1 + x2 + 1);
	if (c != NULL)
	{
		return (NULL);
	}
	strcpy(c, x1);
	strcpy(c, x2);
	return (c);
}
