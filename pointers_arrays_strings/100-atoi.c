#include "main.h"
/**
 * int _atoi - convert a string to an integer
 * @s: the string to b converted
 * Return :integer value of the converted string
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;

	do
	{
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			total = (total * 10) + (*s - '0');

		else if (total > 0)
			break;

	}
	 while (*s++);

	return (total * sign);
}
