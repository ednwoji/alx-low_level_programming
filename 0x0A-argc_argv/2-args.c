#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints all arguments it receives
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc, i++)
	{
		printf("%d\n", argv[i]);
	}
	return (0);
}
