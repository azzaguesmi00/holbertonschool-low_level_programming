#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area.
 * @n: the number of bytes to be copied
 * @dest:pointer to the source of data to be copied
 * @src: pointer to the destination
 * return: *char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
