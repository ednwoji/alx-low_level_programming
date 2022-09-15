#include "main.h"


/**
 * int print_sign(int n) - Check the description
 * Description: Prints the sign on a number
 * Return: 1 if greater than zero, 0 if equal to zero and -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
}
