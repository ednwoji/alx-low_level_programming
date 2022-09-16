#include "main.h"

/**
 * more_numbers - a function that print 10 times the numbers from 0 t0 14
 * followed by a new line
 * Return: Always 0
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
