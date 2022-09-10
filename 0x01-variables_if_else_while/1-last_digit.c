#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;
	if ((98 % 10) > 5)
		printf("Last digit of %d is %d and is greater than 5\n", 98, 98 % 10);
	else if ((98 % 10) == 0)
		printf("Last digit of %d is %d and is 0\n", 98, 98 % 10);
	else if ((98 % 10) < 6 && (98 % 10) != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", 98, 98 % 10);
	return (0);
}
