#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen_recursion -returns the length of a string
 * @s: string
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int i;
	if (*s != '\0')
	{
		i=1 + _strlen_recursion(s++);
	}
	else
		i=0;
	return(i);
}
