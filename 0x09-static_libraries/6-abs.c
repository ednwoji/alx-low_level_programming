#include "main.h"
#include <stdio.h>


/**
 * int _abs(int c) - Check description
 * Description: Computes the absolute value of an integer
 * Return: Always 0 (Successful)
 */
int _abs(int c)
{
	if (c == 0 || c > 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
