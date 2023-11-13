#include <main.c>

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

int _isupper(int c)
{
	return 0;
}
