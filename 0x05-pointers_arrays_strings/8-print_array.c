#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: Input array
 * @n: Input integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar (a[i] + '0');
		_putchar ('\n');
	}	
}
