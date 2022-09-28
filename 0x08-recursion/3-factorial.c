#include "main.h"

/**
 * factorial - Function that returns the factorial of a number
 * @n: Input integer
 * Returns: Factorial of a number
 */
int factorial(int n)
{
	if (n == 0)
		return 1;
	return (n * factorial(n - 1));
}
