#include "main.h"
#include <string.h>

/**
 * char *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest:  buffer to copy the  string to
 * @src: the source string to copy
 * Return value: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i]!= '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
