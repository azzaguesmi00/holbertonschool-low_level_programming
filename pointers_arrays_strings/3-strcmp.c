#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first character to compare
 * @s2: the second character to compare
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, c = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && c == 0)
	{
		c = s1[i] - s2[i];
		i++;
	}
	return (c);
}
