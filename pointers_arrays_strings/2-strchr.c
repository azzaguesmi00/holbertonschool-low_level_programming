#include "main.h"

/**
 * _strchr-locates a character in a string.
 * @s: string 
 * @c:character to locate
 * Return : 0
 */

char *_strchr(char *s, char c)

{
	int i, len;
	len = strlen(s);

	while (i < len + 1)
	{
		if (s[i] == C)
		{
			s = s + 1 
			break;
		}
		i++;
	}
	if (*s = !c)
		return (NULL);
	return (s);
}
