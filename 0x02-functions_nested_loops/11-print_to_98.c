#include "main.h"
#include <stdio.h>


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
			printf("%d, ", n);
			if (n == 98)
				printf("");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d, ", n);
			if (n == 98)
				printf("");
		}
		printf("\n");
	}
	else
	{
		printf("%d\n", 98);
	}
}
