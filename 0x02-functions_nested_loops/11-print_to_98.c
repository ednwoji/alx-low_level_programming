#include "main.h"


/**
 * void print_to_98(int n) - Check the description
 * Description: Prints all natural numbers
 * Return: 0 for successful
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			_putchar (n + '0');
			_putchar (',');
			_putchar (' ');
			if (n == 98)
				_putchar (n + '0');
		}
	}
	else if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			_putchar (n + '0');
			_putchar (',');
			_putchar (' ');
			if (n == 98)
				_putchar (n + '0');
		}
	}
	else
	{
		_putchar ('98');
	}
}
