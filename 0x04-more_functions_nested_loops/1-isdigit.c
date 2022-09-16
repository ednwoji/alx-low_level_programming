#include "main.h"


/**
 * _isdigit - A function that checks for a digit (0 through 9)
 * @c: An Input integer
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
