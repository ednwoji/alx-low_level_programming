#include "main.h"


/**
 * _islower - Check Description
 * @c: An input character
 * Description: Function uses _putchae function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if it is uppercase
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
