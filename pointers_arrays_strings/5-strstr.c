#include "main.h"
#include <string.h>

/**
 * _strstr-  locates a substring.
 * @needle:substring
 * @haystack:string
 *Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, n = 0;

	while (needle[n] != '\0')
		n++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != n)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
