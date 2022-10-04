#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that adds positive numbers
 * @argc: Argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, num, val, result = 0;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			val = atoi(argv[i]);

			if (val == '0')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
			num = atoi(argv[i]);
			result += num;
			}
		}
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("0\n");
	}
}
