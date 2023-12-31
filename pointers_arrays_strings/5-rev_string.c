#include <string.h>
#include "main.h"

/**
 * rev_string -  reverses a string.
 * @s: string to reverse
 *
 * Return : void
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;

	while (s[i++])
		len++;

	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
