#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 9; num++)
	{
		putchar (num + '0');
		putchar (',');
		putchar (' ');
	}
	putchar ("9\n");
	return (0);
}
