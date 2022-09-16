#include "main.h"


/**
 * print_line - a function that draws a straight line in the Terminal
 * followed by a new line
 * @n: An input integer
 * Return: Always 0
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
