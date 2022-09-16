#include "main.h"

/**
 * print_square - prints a square
 * @size: Input integer
 * Return: Always 0
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			_putchar ('#');
			for (j = 0; j <= i; j++)
			{
				_putchar ('\n');
			}
		}
	}
	else
	{
		_putchar ('\n');
	}
}
