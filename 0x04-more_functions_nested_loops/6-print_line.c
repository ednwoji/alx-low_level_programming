#include "main.h"


/**
 * print_line(int n) - Draws a straight line in the Terminal
 *
 */
void print_line(int n)
{
	int num;

	for (num = 1; num <= n; num++)
	{
		_putchar ('_');
		if (n <= 0)
		{
			_putchar ('\n');
		}
	}
	_putchar ('\n');
}
