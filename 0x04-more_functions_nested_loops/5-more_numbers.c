#include "main.h"

/**
 * void more_numbers - print 10 times the numbers from 0 t0 14
 *
 */
void more_numbers(void)
{
	int num;
	int space;

	for (space = 0; space < 10; space++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar (num + '0');
		}
		_putchar ('\n');
	}
}
