#include "main.h"
#include <stdio.h>
/**
 * _strdup- check the code
 * @str: char
 * Return: 0 or null
 */
char *_strdup(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	printf("%s", str);
	str = malloc(sizeof(char) * i + 1);
	return (str);
}
