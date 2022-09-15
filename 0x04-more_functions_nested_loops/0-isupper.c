#include "main.h"
#include <stdio.h>


/**
 * int _isupper(int c) - Check the description
 * Description - Checks for uppercase character
 * Return: 1 if true, 0 if false
 */
int _isupper(int c)
{
	char alpha = 'A';
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		if (c == alpha)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
