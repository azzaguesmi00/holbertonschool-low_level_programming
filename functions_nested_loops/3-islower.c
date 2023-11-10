#include "main.h"

/**
 * _islower -checks for lowercase character.
 * @c: the character to check
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
