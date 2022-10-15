#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - a function that returns the sum of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: The result to sum a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that returns the subtract of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: The result to subtract a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that returns the multiplication of a and b
 * @a: an input integer
 * @b: an input integer
 * Return: the result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that returns the division of a and b
 * @a: input integer
 * @b: input integer
 * Return: The result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function that returns the modulo of a and b
 * @a: input integer
 * @b: input integer
 * Return: THe result to module a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
