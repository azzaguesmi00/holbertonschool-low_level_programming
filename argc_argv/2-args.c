#include <stdio.h>

/**
 *main - check the code
 * @argv: char
 * @argc: int
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
