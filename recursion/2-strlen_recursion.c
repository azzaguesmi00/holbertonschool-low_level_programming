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
		_strlen_recursion(i + 1);
		_putchar(*s);
	}
	return (s);
}
