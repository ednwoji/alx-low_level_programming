#include "main.h"


/**
 * print_diagonal(int n) - Draws a diagonal line on the terminal
 * @n: Input interger to be passed as argument
 *
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar ('\\');
		if (n <= 0)
		{
			_putchar ('\n');
		}
		_putchar ('\n');
	}
}
