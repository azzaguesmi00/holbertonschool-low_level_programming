#include "main.h"

/**
 * times_table - prints the 9 times table,
 * starting with 0
 *
 */
void times_table(void)
{
	int i, j, e;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			e = j * i;
			if (j == 0)
			{
				_putchar(e + '0');
			}

			if (e < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(e + '0');
			}
			else if (e >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((e / 10) + '0');
				_putchar((e % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
