#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints the result of the multiplication
 * Followed by a new line
 * @argc: Argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, z = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			z = z * argv[i];
		}
		printf("%d\n", z);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
