#include <string.h>
#include "main.h"
/**
 * print_rev- prints a string, in reverse, followed by a new line.
 * @s: string to reverse
 *
 * Return : void
 */
void print_rev(char *s)
{
	int len;
	int i;

	if(*s == '\0')
		_putchar('\n');
	else{
		i =0;
		len = strlen(s);
		while (i < len){
			_putchar(s[len - i - 1]);
			i++;
		}
		_putchar('\n');
	}
}
