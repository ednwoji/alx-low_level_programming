#include "main.h"

/**
 * swap_int - Swap values of two integers
 * @a: Integer input pointer
 * @b: Integer input pointer
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
