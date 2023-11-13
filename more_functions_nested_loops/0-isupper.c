#include <main.h>
/**
 * isupper- check for uppercase character
 * 0c: the character to be checked
 *
 * Return: Return: 1 if c is a letter, 0 otherwise
 */
int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
