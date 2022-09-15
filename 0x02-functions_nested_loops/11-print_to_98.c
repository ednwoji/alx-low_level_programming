#include "main.h"
#include <stdio.h>


/**
 * print_to_98(int n) - Prints all natural numbers from input to 98
 * Description: Prints all natural numbers
 * @n: the number to begin counting from
 * Return: 0 for successful
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 97; n++)
		{
			printf("%d, ", n);
			if (n == 97)
				printf("%d", 98);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (n = n; n >= 99; n--)
		{
			printf("%d, ", n);
			if (n == 99)
				printf("%d", 98);
		}
		printf("\n");
	}
	else
	{
		printf("%d\n", 98);
	}
}
