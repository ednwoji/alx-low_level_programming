#include "main.h"


/**
 * int _isdigit(int c) - Checks for a digit 0 through 9
 * Description - Checks for the digit
 * @c: Input charater
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	char value;
	int check = 0;

	for (value = '0'; value <= '9'; value++)
	{
		if (c == value)
		{
			check = 1;
		}
	}
	return (check);
}
