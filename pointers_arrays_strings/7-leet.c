#include "main.h"
/**
 * leet - encode string to 1337
 * @s: string to encode
 * Return: char* 
 */
char *leet(char *s)
{
	unsigned int i;
	char c[] = {'A', 'E', 'O', 'T', 'L'};
	int n[] = {4, 3, 0, 7, 1};
	char *str = s;

	while (*s)
	{
		for (i = 0; i < sizeof(c) / sizeof(char); i++)
		{
			if (*s == c[i] || *s == c[i] + 32)
			{
				*s = 48 + n[i];
			}
		}
		s++;
	}
	return (str);
}


