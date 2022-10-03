#include "main.h"


/**
 * _isupper(int c) - A function that checks for uppercase character
 * @c: An input character
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	char alpha = 'A';
	int isupper = 0;

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		if (c == alpha)
		{
			isupper = 1;
		}
	}
	return (isupper);
}
