#include "main.h"

/**
 * more_numbers - print 10 times the numbers, from 0-14
 */

void more_numbers(void)
{
	int i, j;

	for  (i = 1; i <= 10; j++)
	{
		for (j = 0; j <= 4, j++)
		{
			if (j >= 10)
				_putchar('1');
			_putcar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
