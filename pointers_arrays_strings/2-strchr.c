#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strchr-locates a character in a string.
 * @s: string
 * @c:character to locate
 * Return : 0
 */

char *_strchr(char *s, char c)
{
	int len, i = 0;

	len = strlen(s);
	while (i < len + 1)
	{
		if (s[i] == c)
		{
			s = s + i;
			break;
		}
		i++;
	}
	if (*s != c)
		return (NULL);
	return (s);
}
