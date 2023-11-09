#include <main.h>
/**
 * main -Print 10 times the alphabet, in lowercase,
 * followed by a new line.
 */

void print_alphabet_x10(void);
{
	int i = 0 : char letter;
	while (i++ <= 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	}
}