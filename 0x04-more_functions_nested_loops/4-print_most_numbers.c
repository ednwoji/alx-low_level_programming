#include "main.h"


/**
 * print_most_numbers - a function that prints numbers from 0 to 9
 * Do not print 2 and 4
 * followed by a new line
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar (num + '0');
		}
	}
	_putchar ('\n');
}
