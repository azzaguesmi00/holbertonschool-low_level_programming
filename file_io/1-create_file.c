#include "main.h"
/**
 * create_file - check the code
 * @filename: const char
 * @text_content: char
 * Return: num of bytes or 0 if error
*/
int create_file(const char *filename, char *text_content)
{
    int i, n;

	if (!text_content)
		n = 0;
	else
		n = strlen(text_content);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (!text_content)
	{
		close(i);
		return (1);
	}
	if (i == -1)
		return (-1);
	write(i, text_content, n);
	close(i);
	return (1);
}
