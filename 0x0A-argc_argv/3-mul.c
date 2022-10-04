#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the result of the multiplication
 * Followed by a new line
 * @argc: Argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
