#include "main.h"
/**
 *_puts - prints a string
 * @str: string to print
 *
 * On success: return the number of characters printed
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*(str++));
	_putchar('\n');
}
