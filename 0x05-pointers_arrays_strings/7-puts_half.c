#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: Input string character
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
		n = (len + 1) / 2;

	for (int i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
