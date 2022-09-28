#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string
 * @s: input character
 * Returns: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
