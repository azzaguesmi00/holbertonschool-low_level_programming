#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string of character to print
 *
 * Return : void
 */
void puts_half(char *str)
{
	int n = (length_of_the_string - 1) / 2;
	int i;
	for (i = n / 2; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('/n');
}
