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
	int i = 0;

	if (*s != '\0')
	{
		return(  _strlen_recursion(s + 1));
	}
	return (i);
}

